/*
 *  Pixel.h
 *  Created by Elhadj Amadou Barry on 31/01/2024.
 *
 *  Description:
 *  This file defines the Pixel struct, representing a color pixel with red (r), green (g), and blue (b) components.
 *  The struct provides two constructors, one with default values (0,0,0) and another that allows initializing the color components.
 *
 *  Usage:
 *  - Include this header file in your code to use the Pixel struct.
 *  - Create Pixel objects to represent color information in your application.
 */

#ifndef IMAGEMODULECPP_PIXEL_H
#define IMAGEMODULECPP_PIXEL_H

struct Pixel {
    int r, g, b;

    // Default constructor, initializes to black.
    Pixel() : r(0), g(0), b(0) {}

    // Constructor with custom RGB values.
    Pixel(int nr, int ng, int nb) : r(nr), g(ng), b(nb) {}
};

#endif //IMAGEMODULECPP_PIXEL_H