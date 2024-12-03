//
// Created by David on 11/8/2024.
//

#include "triangle.h"
using namespace std;

/// ===== CONSTRUCTORS =====
/* Default Constructor
 *
 * Create a white triangle with all its points at (0, 0).
 *
 * Parameters: None.
 */
triangle::triangle() {
    points.reserve(3);
    for (auto& point : points) {
        point.first = 0;
        point.second = 0;
    }
    for (auto color : colors) {
        color = 255;
    }
    middle_point_up = false;
}


/* Parameterized Integer Constructor
 *
 * Create a white triangle with its points set at different locations throughout the scene.
 *
 * Parameters:
 * - The x coordinate of the first vertex.      (Integer)
 * - The y coordinate of the first vertex.      (Integer)
 * - The x coordinate of the second vertex.     (Integer)
 * - The y coordinate of the second vertex.     (Integer)
 * - The x coordinate of the third vertex.      (Integer)
 * - The y coordinate of the third vertex.      (Integer)
 */
triangle::triangle(int x1, int y1=0, int x2=0, int y2=0, int x3=0, int y3=0) {
    // Create the vertices of the triangle.
    points.reserve(3);
    points[0].first = x1;
    points[0].second = y1;
    points[1].first = x2;
    points[1].second = y2;
    points[2].first = x3;
    points[2].second = y3;

    // Sort the vertices so that the leftmost vertex is at the start and the rightmost vertex is at the end.
    sort_points();

    // Make the triangle white.
    colors[0] = 255;
    colors[1] = 255;
    colors[2] = 255;

    // Calculate whether the middle point is above the line created by the other two points.
    calculate_middle_orientation();
}


/* Parameterized Vector Constructor
 *
 * Create a white triangle with its points set at different locations throughout the scene.
 *
 * Parameters:
 * - An organized collection of all three vertices in the triangle.  (Vector of pairs of integers)
 */
triangle::triangle(vector<pair<int, int>> _points) {
    // Create the vertices of the triangle.
    points.reserve(3);
    for (int i = 0; i < 3; i++) {
        points.emplace_back(_points[i].first, _points[i].second);
    }

    // Sort the vertices so that the leftmost vertex is at the start and the rightmost vertex is at the end.
    sort_points();

    // Make the triangle white.
    for (auto color : colors) {
        color = 255;
    }

    // Calculate whether the middle point is above the line created by the other two points.
    calculate_middle_orientation();
}


/* Parameterized Integer Constructor with Color
 *
 * Create a colored triangle with its points set at different locations throughout the scene.
 *
 * Parameters:
 * - The x coordinate of the first vertex.      (Integer)
 * - The y coordinate of the first vertex.      (Integer)
 * - The x coordinate of the second vertex.     (Integer)
 * - The y coordinate of the second vertex.     (Integer)
 * - The x coordinate of the third vertex.      (Integer)
 * - The y coordinate of the third vertex.      (Integer)
 * - The red value of the triangle.             (Unsigned character)
 * - The green value of the triangle.           (Unsigned character)
 * - The blue value of the triangle.            (Unsigned character)
 */
triangle::triangle(int x1, int y1=0, int x2=0, int y2=0, int x3=0, int y3=0,
                   unsigned char red=0, unsigned char green=0, unsigned char blue=0) {
    // Create the vertices of the triangle.
    points.reserve(3);
    points[0].first = x1;
    points[0].second = y1;
    points[1].first = x2;
    points[1].second = y2;
    points[2].first = x3;
    points[2].second = y3;

    // Sort the vertices so that the leftmost vertex is at the start and the rightmost vertex is at the end.
    sort_points();

    // Give the triangle its color.
    colors[0] = red;
    colors[1] = green;
    colors[2] = blue;

    // Calculate whether the middle point is above the line created by the other two points.
    calculate_middle_orientation();
}


/* Parameterized Vector Constructor with color.
 *
 * Create a colored triangle with its points set at different locations throughout the scene.
 *
 * Parameters:
 * - An organized collection of all three vertices in the triangle. (Vector of pairs of integers)
 * - An RGB sequence of numbers.                                    (Vector of unsigned characters)
 */
triangle::triangle(vector<pair<int, int>> _points, vector<unsigned char> _colors) {
    // Create the vertices of the triangle.
    points.reserve(3);
    for (int i = 0; i < 3; i++) {
        points.emplace_back(_points[i].first, _points[i].second);
    }

    // Sort the vertices so that the leftmost vertex is at the start and the rightmost vertex is at the end.
    sort_points();

    // Give the triangle its color.
    for (int i = 0; i < 3; i++) {
        colors[i] = _colors[i];
    }

    // Calculate whether the middle point is above the line created by the other two points.
    calculate_middle_orientation();
}



/// ===== CLASS FUNCTIONS =====

/* Sort Points
 *
 * This function sorts the points in the triangle so that the leftmost point is the first point and the rightmost
 * point is the last point.
 *
 * Source: https://www.geeksforgeeks.org/insertion-sort-algorithm/
 *
 * Parameters: None.
 * Returns: None.
 */
void triangle::sort_points() {
    for (int i = 1; i < 3; ++i) {
        auto temp = points[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && points[j] > temp) {
            points[j + 1] = points[j];
            j = j - 1;
        }
        points[j + 1] = temp;
    }
}


/* Calculate Slope
 *
 * This function calculates the slope between two different points.
 *
 * Parameters:
 * - Point A.   (Pair of integers)
 * - Point B.   (Pair of integers)
 * Returns: The slope of the two points.  (Float)
 */
float triangle::calculate_slope(pair<int, int> a, pair<int, int> b) {
    float dx = a.first - b.first;
    float dy = a.second - b.second;
    // If the two points form a vertical line, then the slope is infinity.
    if (dx == 0.0f) {
        return numeric_limits<float>::infinity();
    }
    return (dy/dx);
}


/* Calculate Middle Orientation
 *
 * This function uses all the points in the triangle to determine whether the middle point is above the line created
 * by the other two points.
 *
 * Parameters: None.
 * Returns: Whether the middle point is above the line created by the other two points.  (Boolean)
 */
bool triangle::calculate_middle_orientation() {
    // Get the slope from the two end points.
    float slope = calculate_slope(points[0], points[2]);

    // Get the leftmost point's y position and make that the y intercept.
    float intercept = points[0].second;

    // Calculate where the middle point be if it was on the line.
    float line_y = (slope * points[1].first) + intercept;

    // Update whether the middle point is above the line or below it.
    middle_point_up = (points[1].second > line_y);
    return middle_point_up;
}


/* Point In Bounds
 *
 * This function takes in two coordinates and checks whether the coordinates are within the triangle.
 *
 * Parameters:
 * - The point's x position.    (Integer)
 * - The point's y position.    (Integer)
 * Returns: Whether the point is within the triangle.  (Boolean)
 */
bool triangle::point_in_bounds(int x, int y) {
    // Check if the x coordinate is outside the triangle's width.
    /*
    if (x < points[0].first || x > points[2].first) {
        return false;
    }
     */

    // Get the slope from the two end points.
    float large_slope = calculate_slope(points[0], points[2]);
    // Get the leftmost point's y position and make that the y intercept.
    float large_intercept = points[0].second;
    // Calculate where the middle point be if it was on the line.
    float large_y = (large_slope * x) + large_intercept;

    float small_slope = 0;
    float small_intercept = 0;
    float small_y = 0;

    // Determine on which side of the triangle the point is on.
    if (x < points[1].first) {
        // Left side
        small_slope = calculate_slope(points[0], points[1]);
        small_intercept = points[0].second;
        small_y = (small_slope * x) + small_intercept;
    } else {
        // Right side
        small_slope = calculate_slope(points[1], points[2]);
        small_intercept = points[1].second;
        small_y = (small_slope * (x - points[1].first)) + small_intercept;
    }

    // If it is a vertical line, then we check if the y position is on the line.
    if ((large_slope == numeric_limits<float>::infinity()) || (small_slope == numeric_limits<float>::infinity())) {
        if (x == points[0].first) {
            if (middle_point_up) {
                return ((y >= points[0].second) && (y <= points[1].second));
            } else {
                return ((y <= points[0].second) && (y >= points[1].second));
            }
        } else {
            if (middle_point_up) {
                return ((y >= points[2].second) && (y <= points[1].second));
            } else {
                return ((y <= points[2].second) && (y >= points[1].second));
            }
        }
    }

    // Check if the point is between the two lines of the triangle.
    if (middle_point_up) {
        return ((small_y >= y) && (y >= large_y));
    } else {
        return ((small_y <= y) && (y <= large_y));
    }
}


/* Point In Bounds
 *
 * This function takes in two coordinates and checks whether the coordinates are within the triangle.
 *
 * Parameters:
 * - The point's x and y position.  (Pair of integers)
 * Returns: Whether the point is within the triangle.   (Boolean)
 */
bool triangle::point_in_bounds(pair<int, int> point) {
    return point_in_bounds(point.first, point.second);
}


/* Get Points
 *
 * Return the points for external use.
 *
 * Parameters: None.
 * Returns: The triangle's vertices.    (Vector of pairs of integers)
 */
vector<pair<int, int>> triangle::get_points() {
    return points;
}

/* Get Colors
 *
 * Return the colors for external use.
 *
 * Parameters: None.
 * Returns: The triangle's colors.  (Pointer to an array of unsigned characters)
 */
unsigned char* triangle::get_colors() {
    return colors;
}

/* Set colors
 *
 * Change the triangle's colors to something else.
 *
 * Parameters:
 * - The new value for red.     (Unsigned character)
 * - The new value for green.   (Unsigned character)
 * - The new value for blue.    (Unsigned character)
 * Returns: None.
 */
void triangle::set_colors(unsigned char red, unsigned char green, unsigned char blue) {
    colors[0] = red;
    colors[1] = green;
    colors[2] = blue;
}
