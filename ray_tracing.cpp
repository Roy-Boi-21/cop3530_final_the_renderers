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

sf::Image ray_tracing::render(sf::Color background_color) {
    //Iterate each pixel
    for(int y=0; y<height; y++){
        for(int x=0; x<width; x++){
            //Iterate through all triangles to find the topmost one
            //Assuming triangles is in layer order
            for(int current = 0; current < triangle_count; current++){
                triangle current_triangle = triangles[current];
                rendering.setPixel(x, y, background_color);
                pair<int, int> point(x,y);
                // bool in_bounds = current_triangle.point_in_bounds(point);
                bool in_bounds = current_triangle.area_test(point);
                if(in_bounds){
                    unsigned char* triangleColor = current_triangle.get_colors();
                    sf::Color pixel_color(triangleColor[0], triangleColor[1], triangleColor[2]);
                    rendering.setPixel(x, y, pixel_color);
                    // Debugging
                    // Coloring vertices 1r, 2g, 3b
                    bool vertices = false;
                    int vertices_x, vertices_y;
                    vector<sf::Color> vertices_color= {sf::Color(255, 0, 0), sf::Color(0, 255, 0), sf::Color(0, 0, 255)};
                    for(int i=0; i<3; i++){
                        vertices_x = current_triangle.get_points()[i].first;
                        vertices_y = current_triangle.get_points()[i].second;
                        if(vertices_x == x and vertices_y == y){
                            rendering.setPixel(x, y, vertices_color[i]);
                            vertices = true;
                            break;
                        }
                    }
                    // Debug statements
                    /*
                    cout<<"Triangle #"<<current<<" at pixel ("<<x<<", "<<y<<") Set to color ";
                    if(vertices){
                        cout<<"VERTICES";
                    }
                    else{
                        for (int i = 0; i < 3; ++i) {
                            cout << static_cast<int>(triangleColor[i])<<" ";
                        }
                    }
                    cout<<endl;
                    */
                    break;
                }
            }
        }
    }

    return rendering;
}
