//
// Created by JohnB on 12/2/2024.
//

#include "rasterization.h"

/*
 * Paramatized constructor for Rasterization class
 *
 * Creates a rasterization object with parameters from src
 *
 * Prameters: scene src
*/
rasterization::rasterization(scene src, sf::Color background_color) {
    //Initialize Variables
    triangles = src.get_triangles();
    triangle_count = src.get_triangle_count();
    x_boundary = src.get_x_boundary();
    y_boundary = src.get_y_boundary();
    width = x_boundary.second - x_boundary.first;
    height = y_boundary.second - y_boundary.first;

    //Initialize rendering
    rendering.create(width,height,background_color);
}

sf::Image rasterization::render() {
    //Iterate through each triangle
    for(int current = 0; current < triangle_count; current++){
        triangle current_triangle = triangles[current];
        //For each pixel in the image, determine if the pixel is within
        //the triangle and draw it, overwriting the previous pixel data
        for(int x = 0; x < width; x++){
            for(int y = 0; y < height; y++){
                if(current_triangle.point_in_bounds(x,y)){
                    unsigned char* triangle_color = current_triangle.get_colors();
                    sf::Color pixel_color(triangle_color[0], triangle_color[1], triangle_color[2]);
                    rendering.setPixel(x,y,pixel_color);
                }
            }
        }
    }
    //Return final image
    return rendering;
}
