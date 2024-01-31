/*
   Image.h - Header file for the Image class

   The Image class represents a simple 2D image, where each pixel is
   represented by a Pixel object.

   Class Members:
   - int dimX, dimY: Dimensions of the image.
   - Pixel* tabPix: Dynamic array to store the pixels of the image.

   Constructors:
   - Image(): Default constructor, initializes the image dimensions to 0.
   - Image(int dimX, int dimY): Parameterized constructor, creates an image
     with specified dimensions and initializes the pixel array.

   Destructor:
   - ~Image(): Destructor, deallocates the dynamic memory used for the pixel array.

   Public Methods:
   - Pixel getPixel(int x, int y): Returns the Pixel at the specified coordinates.
   - Pixel getPixel(int x, int y) const: Const version of getPixel method.
   - void setPixel(int x, int y, Pixel couleur): Sets the Pixel at the specified coordinates.
   - void dessinerRectangle(int Xmin, int Ymin, int Xmax, int Ymax, Pixel couleur):
     Draws a rectangle with the specified color within the specified coordinates.
   - void effacer(Pixel pixel): Erases the image by drawing a rectangle with the specified color.

   Static Method (for testing purposes):
   - static void testRegression(): Performs regression testing on various methods of the Image class.

   Usage:
   - Include this header file in your source files where you want to use the Image class.
   - Create an Image object and perform various operations on it.
   - Utilize the static testRegression method for testing the functionality of the Image class.




*/

#ifndef _PIXEL_H
#define _PIXEL_H
#include "Pixel.h"
namespace Picture {

    class Image {
    public:
        int dimX, dimY;
    public:
        Pixel *tabPix ;

        Image();

        Image(int dimX, int dimY);

        ~Image();

        Pixel  getPixel(int x, int y);

        Pixel  getPixel(int x, int y) const;

        void setPixel(int x, int y, Pixel couleur);

        void dessinerRectangle(int Xmin, int Ymin, int Xmax, int Ymax, Pixel couleur);

        void effacer(Pixel pixel);

        static void testRegression();

    };
}






#endif
