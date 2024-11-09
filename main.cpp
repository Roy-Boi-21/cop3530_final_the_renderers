#include <iostream>
#include "triangle.h"
using namespace std;

int main() {
    cout << "=== Pointing up Triangle Test ===" << endl;
    triangle upside(100,0, 50,100, 0,0);
    cout << "Passing: " << endl;
    cout << "- Locations within the triangle: " << endl;
    cout << upside.point_in_bounds(25, 25) << endl;
    cout << upside.point_in_bounds(50, 50) << endl;
    cout << upside.point_in_bounds(75, 25) << endl;
    cout << "- Points on the triangle: " << endl;
    cout << upside.point_in_bounds(0, 0) << endl;
    cout << upside.point_in_bounds(50, 100) << endl;
    cout << upside.point_in_bounds(100, 0) << endl;
    cout << "Failing: " << endl;
    cout << "- Locations outside the x boundary of the triangle: " << endl;
    cout << upside.point_in_bounds(-50, 0) << endl;
    cout << upside.point_in_bounds(150, 0) << endl;
    cout << "- Locations that are above the triangle: " << endl;
    cout << upside.point_in_bounds(25, 60) << endl;
    cout << upside.point_in_bounds(50, 120) << endl;
    cout << upside.point_in_bounds(75, 60) << endl;
    cout << "- Locations that are below the triangle: " << endl;
    cout << upside.point_in_bounds(25, -10) << endl;
    cout << upside.point_in_bounds(50, -50) << endl;
    cout << upside.point_in_bounds(75, -10) << endl << endl;

    cout << "=== Pointing down Triangle Test ===" << endl;
    triangle downside(0,0, 50,-100, 100,0);
    cout << "Passing: " << endl;
    cout << "- Locations within the triangle: " << endl;
    cout << downside.point_in_bounds(25, -25) << endl;
    cout << downside.point_in_bounds(50, -50) << endl;
    cout << downside.point_in_bounds(75, -25) << endl;
    cout << "- Points on the triangle: " << endl;
    cout << downside.point_in_bounds(0, 0) << endl;
    cout << downside.point_in_bounds(50, -100) << endl;
    cout << downside.point_in_bounds(100, 0) << endl;
    cout << "Failing: " << endl;
    cout << "- Locations outside the x boundary of the triangle: " << endl;
    cout << downside.point_in_bounds(-50, 0) << endl;
    cout << downside.point_in_bounds(150, 0) << endl;
    cout << "- Locations that are above the triangle: " << endl;
    cout << downside.point_in_bounds(25, 60) << endl;
    cout << downside.point_in_bounds(50, 120) << endl;
    cout << downside.point_in_bounds(75, 60) << endl;
    cout << "- Locations that are below the triangle: " << endl;
    cout << downside.point_in_bounds(25, -60) << endl;
    cout << downside.point_in_bounds(50, -120) << endl;
    cout << downside.point_in_bounds(75, -60) << endl << endl;

    cout << "=== Right Triangle Test ===" << endl;
    triangle right(0,0, 100,0, 100,100);
    cout << "Passing: " << endl;
    cout << "- Locations on the vertical line: " << endl;
    cout << right.point_in_bounds(100, 0) << endl;
    cout << right.point_in_bounds(100, 50) << endl;
    cout << right.point_in_bounds(100, 100) << endl;
    cout << "Failing: " << endl;
    cout << "- Locations beyond the vertical line: " << endl;
    cout << right.point_in_bounds(100, -1) << endl;
    cout << right.point_in_bounds(100, 101) << endl;
    return 0;
}
