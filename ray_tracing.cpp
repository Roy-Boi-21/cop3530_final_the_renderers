//
// Created by cynth on 2024/11/29.
//

#include "ray_tracing.h"
using namespace std;

/// ===== CONSTRUCTORS =====
/* Parameterized Constructor
 *
 * Creates a ray tracing object with parameters from src
 *
 * Parameters: scene src.
 */
ray_tracing::ray_tracing(scene src) {
    //Initialize variables
    triangles = src.get_triangles();
    triangle_count = src.get_triangle_count();
    x_boundary = src.get_x_boundary();
    y_boundary = src.get_y_boundary();
    width = x_boundary.second - x_boundary.first;
    height = y_boundary.second - y_boundary.first;


    //Initialize rendering
    sf::Color fillColor(0, 0, 0);
    rendering.create(width, height, fillColor);
}

sf::Image ray_tracing::render() {
    //Iterate each pixel
    for(int y=0; y<width; y++){
        for(int x=0; x<height; x++){
            //Iterate through all triangles to find the topmost one
            //Assuming triangles is in layer order
            for(int current = 0; current < triangle_count; current++){
                triangle current_triangle = triangles[current];
                if(current_triangle.point_in_bounds(x, y)){
                    unsigned char* triangleColor = current_triangle.get_colors();
                    sf::Color pixel_color(triangleColor[0], triangleColor[1], triangleColor[2]);
                    rendering.setPixel(x, y, pixel_color);
                    break;
                }
            }
        }
    }
    return rendering;
}
