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

