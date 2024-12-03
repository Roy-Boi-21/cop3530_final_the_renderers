#include <iostream>
#include <filesystem>
#include <SFML/Graphics/Image.hpp>
#include "scene.h"
#include "ray_tracing.h"
using namespace std;

int main() {
    /// ===== TRIANGLE TESTS =====
    /*
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
     */

    /// ===== SCENE TESTS =====
    /*
    scene image(0, 100, 0, 100);
    cout << image.get_triangle_count() << endl;
    image.generate_triangle();
    image.generate_triangle();
    image.generate_triangle();
    cout << image.get_triangle_count() << endl;
    image.clear_scene();
    image.generate_triangle();
    cout << image.get_triangle_count() << endl;
     */

    /// ===== RAY TRACING TESTS =====
    // Change values here
    int image_width = 200;
    int image_height = 200;
    scene image(0, image_width, 0, image_height);

    for(int i=0; i<5; i++){
        image.generate_triangle();
    }

    //Debugging
    auto triangles = image.get_triangles();
    for (auto triangle : triangles) {
        //cout << triangle.second.get_points().size() << endl;
        cout<<"Vertices:";
        for(int i=0; i<3; i++){
            int vertices_x = triangle.second.get_points()[i].first;
            int vertices_y = triangle.second.get_points()[i].second;
            cout<<" ("<<vertices_x<<", "<<vertices_y<<") ";
            //cout<<triangle.second.point_in_bounds(vertices_x, vertices_y);
        }
        cout<<endl;

    }

    // Rendering
    ray_tracing ray_tracing(image);
    sf::Color background_color(255,255,0);
    sf::Image result = ray_tracing.render(background_color);

    // Saving result
    sf::Vector2u size = result.getSize();
    std::cout << "Image dimensions " << size.x << " x " << size.y << std::endl;

    // Check if the image contains any pixel data
    if (size.x == 0 || size.y == 0) {
        std::cerr << "Error: Image is empty (no size or pixel data)." << std::endl;
        return -1;
    }
    // Making sure the output directory is present
    cout << "Current working directory: "<< filesystem::current_path() << endl;
    string outputDir = "output";
    if (!filesystem::exists(outputDir)) {
        if (!filesystem::create_directory(outputDir)) {
            std::cerr << "Failure creating output directory: " << outputDir << std::endl;
            return -1;
        }
    }
    // Saving ray tracing rendering
    string filePath = outputDir + "/ray_tracing.png";
    if (result.saveToFile(filePath)) {
        std::cout << "Ray tracing rendering saved as \"ray_tracing.png\"" << std::endl;
    } else {
        std::cerr << "Failed attempt to save ray tracing rendering" << std::endl;
    }
    return 0;
}
