//
// Created by David on 11/8/2024.
//

#ifndef PROJECTS_TRIANGLE_H
#define PROJECTS_TRIANGLE_H

#include <algorithm>
#include <iostream>
#include <limits>
#include <utility>
#include <vector>
using namespace std;

class triangle {
    // Class Variables.
    vector<pair<int, int>> points;
    unsigned char colors[3];
    bool middle_point_up;

    // Class Functions.
    void sort_points();
    float calculate_slope(pair<int, int> a, pair<int, int> b);
    bool calculate_middle_orientation();

public:
    // Constructors.
    triangle();
    triangle(int x1, int y1, int x2, int y2, int x3, int y3);
    triangle(vector<pair<int, int>> _points);
    triangle(int x1, int y1, int x2, int y2, int x3, int y3,
             unsigned char red, unsigned char green, unsigned char blue);
    triangle(vector<pair<int, int>> _points, vector<unsigned char> _colors);

    // Class Functions.
    bool point_in_bounds(int x, int y);
    bool point_in_bounds(pair<int, int> point);
    bool area_test(int x, int y);
    bool area_test(pair<int, int> point);
    vector<pair<int, int>> get_points();
    unsigned char* get_colors();
    void set_colors(unsigned char red, unsigned char green, unsigned char blue);
};


#endif //PROJECTS_TRIANGLE_H
