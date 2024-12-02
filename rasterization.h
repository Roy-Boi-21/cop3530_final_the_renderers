//
// Created by JohnB on 12/2/2024.
//

#ifndef PROJECTS_RASTERIZATION_H
#define PROJECTS_RASTERIZATION_H

#include "scene.h"
#include "triangle.h"
#include <SFML/Graphics/Image.hpp>

class rasterization {
    //Class Variables
    map<unsigned int, triangle> triangles;
    int triangle_count;
    pair<int, int> x_boundary;
    pair<int, int> y_boundary;
    int width;
    int height;
    sf::Image rendering;

public:
    //Constructors
    explicit rasterization(scene src, sf::Color background_color);

    //Class functions
    sf::Image render();
};


#endif //PROJECTS_RASTERIZATION_H
