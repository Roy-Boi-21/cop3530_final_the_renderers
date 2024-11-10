//
// Created by David on 11/9/2024.
//

#ifndef PROJECTS_SCENE_H
#define PROJECTS_SCENE_H

#include "triangle.h"
#include <chrono>
#include <map>
#include <random>

class scene {
    // Class variables.
    map<unsigned int, triangle> triangles;
    pair<int, int> x_boundary;
    pair<int, int> y_boundary;
public:
    // Constructors.
    scene();
    scene(int x_start, int x_end, int y_start, int y_end);
    scene(pair<int, int> x_bounds, pair<int, int> y_bounds);

    // Class functions.
    void generate_triangle();
    void clear_scene();
    unsigned int get_triangle_count();
};


#endif //PROJECTS_SCENE_H
