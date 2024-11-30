//
// Created by David on 11/9/2024.
//

#include "scene.h"

/// ===== CONSTRUCTORS =====
/* Default Constructor
 *
 * Create a scene with a total size of 0 pixels.
 *
 * Parameters: None.
 */
scene::scene() {
    x_boundary.first = 0;
    x_boundary.second = 0;
    y_boundary.first = 0;
    y_boundary.second = 0;
}


/* Parameterized Integer Constructor
 *
 * Create a scene using the integers as bounds for the scene.
 *
 * Parameters:
 * - Start of the x boundary.  (Integer)
 * - End of the x boundary.  (Integer)
 * - Start of the y boundary.  (Integer)
 * - End of the y boundary.  (Integer)
 */
scene::scene(int x_start, int x_end, int y_start, int y_end) {
    x_boundary.first = x_start;
    x_boundary.second = x_end;
    y_boundary.first = y_start;
    y_boundary.second = y_end;
}


/* Parameterized Pair Constructor
 *
 * Create a scene using the integer pairs as bounds for the scene.
 *
 * Parameters:
 * - The bounds for x.  (Pair of integers)
 * - The bounds for y.  (Pair of integers)
 */
scene::scene(pair<int, int> x_bounds, pair<int, int> y_bounds) {
    x_boundary.first = x_bounds.first;
    x_boundary.second = x_bounds.second;
    y_boundary.first = y_bounds.first;
    y_boundary.second = y_bounds.second;
}


/// ===== CLASS FUNCTIONS =====
/* Generate Triangle
 *
 * Randomly generate a triangle for to add to the scene.
 *
 * Parameters: None.
 * Returns: None.
 */
void scene::generate_triangle() {
    // Randomly generate a triangle's vertices.
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 generator(seed);
    vector<pair<int, int>> vertices;
    for (int i = 0; i < 3; i++) {
        int x = int(generator() % (x_boundary.second - x_boundary.first)) + x_boundary.first;
        int y = int(generator() % (y_boundary.second - y_boundary.first)) + y_boundary.first;
        vertices.emplace_back(x, y);
    }

    // Create the triangle and add it to the scene.
    triangle new_triangle(vertices);
    triangles[triangles.size()] = new_triangle;
}


/* Clear Scene
 *
 * Remove every triangle from the scene.
 *
 * Parameters: None.
 * Returns: None.
 */
void scene::clear_scene() {
    triangles.clear();
}


/* Get Triangle Count
 *
 * Return how many triangles are in the scene.
 *
 * Parameters: None.
 * Returns: The amount of triangles in the scene.  (Unsigned integer)
 */
unsigned int scene::get_triangle_count() {
    return triangles.size();
}


/// ===== GETTER FUNCTIONS =====
map<unsigned int, triangle> scene::get_triangles() {
    return triangles;
}

pair<int, int> scene::get_x_boundary() {
    return x_boundary;
}

pair<int, int> scene::get_y_boundary() {
    return y_boundary;
}
