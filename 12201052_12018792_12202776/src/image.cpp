#include <iostream>
#include <cassert>
#include "image.h"
#include "Pixel.h"


namespace Picture{

    Image::Image(){
        this->dimX =0 ;
        this->dimY =0 ;

    }

    Image::Image(int dimX,int dimY){

        this->dimX =dimY;
        this->dimX=dimY ;
        tabPix =new Pixel[this->dimX*this->dimY];
        if(dimX>0 &&dimY>0){
            for(int i=0 ; i<this->dimX*this->dimY;i++){
                /*tabPix[i].r=0;
                tabPix[i].g=0;
                tabPix[i].b=0;*/
                tabPix[i] = Pixel();

            }

        }

    }

    Image::~Image(){
        this->dimX=0 ;
        this->dimY =0 ;
        delete[] tabPix;
        tabPix= nullptr ;

    }
   Pixel  Image::getPixel(int x, int y){
        if((x>0 && x<dimX) && (y>0 && y<dimX))
            return tabPix[this->dimX*y + x];
    }

    void Image::setPixel(int x, int y, Pixel couleur) {
        tabPix[y* this->dimX+x] = couleur;
    }

    Pixel  Image::getPixel(int x, int y) const{
        if((x>0 && x<dimX) && (y>0 && y<dimX)) {
            Pixel copie = tabPix[this->dimX*y + x];
            return copie;
        }
    }

    void Image::dessinerRectangle(int Xmin, int Ymin, int Xmax, int Ymax, Pixel couleur){
        for (int i = Xmin; i <=Xmax ; ++i) {
            for (int j = Ymin; j <= Ymax; ++j) {
                setPixel(j,i,couleur);
            }
        }
    }

    void Image::effacer(Pixel pixel) {
        dessinerRectangle(0,0, this->dimX,this->dimY, pixel);
    }


    void Image::testRegression() {
        // Test après avoir dessiné le rectangle et effacé l'image
        Image img(3, 3);

        Pixel p1;  // Creates a default Pixel (black).
        Pixel p2(10, 20, 30);

        img.dessinerRectangle(0, 0, 1, 1, p2);
        img.effacer(p1);

        std::cout << "Testing dessinerRectangle and effacer methods:" << std::endl;
        for (int i = 0; i < img.dimX; i++) {
            for (int j = 0; j < img.dimY; j++) {
                std::cout << "Pixel at (" << j << ", " << i << "): R = " << img.getPixel(j, i).r
                          << ", G = " << img.getPixel(j, i).g << ", B = " << img.getPixel(j, i).b << std::endl;
            }
        }

        // Test de la méthode getPixel
        std::cout << "\nTesting getPixel method:" << std::endl;
        Pixel testPixel = img.getPixel(1, 1);
        std::cout << "Pixel at (1, 1): R = " << testPixel.r << ", G = " << testPixel.g << ", B = " << testPixel.b << std::endl;

        // Test de la méthode setPixel
        std::cout << "\nTesting setPixel method:" << std::endl;
        Pixel newColor(50, 60, 70);
        img.setPixel(1, 1, newColor);
        std::cout << "Pixel at (1, 1) after setPixel: R = " << img.getPixel(1, 1).r
                  << ", G = " << img.getPixel(1, 1).g << ", B = " << img.getPixel(1, 1).b << std::endl;

        // Ajoutez d'autres tests pour les autres méthodes et attributs ici...

        std::cout << "Regression test complete." << std::endl;
    }





}