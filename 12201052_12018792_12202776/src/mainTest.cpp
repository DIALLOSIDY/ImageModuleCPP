/*
 *  main.cpp
 *  Created by Elhadj Amadou Barry on 31/01/2024.
 *
 *  Description:
 *  This program demonstrates the usage of the Pixel struct defined in the "Pixel.h" header file.
 *  It creates two Pixel objects, one using the default constructor (initialized to black) and another
 *  using a custom constructor with specified RGB values. The program then prints the RGB components
 *  of both Pixel objects to the console.
 *
 *  Usage:
 *  - Include the "Pixel.h" header file to use the Pixel struct.
 *  - Create Pixel objects to represent color information in your application.
 */

#include <iostream>
#include "Pixel.h"

int main() {
    // Creating Pixel objects
    Pixel p1;                  // Creates a default Pixel (black).
    Pixel p2(10, 20, 30);       // Creates a Pixel with specified RGB components.

    // Printing RGB components to the console
    std::cout << "RGB components of p1: " << p1.r << " " << p1.g << " " << p1.b << std::endl;
    std::cout << "RGB components of p2: " << p2.r << " " << p2.g << " " << p2.b;

    return 0;
}