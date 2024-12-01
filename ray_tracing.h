//
// Created by cynth on 2024/11/29.
//

#ifndef PROJECTS_RAY_TRACING_H
#define PROJECTS_RAY_TRACING_H

#include "scene.h"
#include "triangle.h"
#include <SFML/Graphics/Image.hpp>

class ray_tracing {
    //Class variables
    map<unsigned int, triangle> triangles;
    int triangle_count;
    pair<int, int> x_boundary;
    pair<int, int> y_boundary;
    int width;
    int height;
    sf::Image rendering;
public:
    // Constructors
    explicit ray_tracing(scene src);

    // Class functions
    sf::Image render(sf::Color backgrorund_color);
};


#endif //PROJECTS_RAY_TRACING_H
