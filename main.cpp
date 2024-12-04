#include <iostream>
#include <filesystem>
#include <chrono>
#include <SFML/Graphics/Image.hpp>
#include <SFML/Graphics.hpp>
#include "scene.h"
#include "ray_tracing.h"
#include "rasterization.h"

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
    int image_width = 900;
    int image_height = 900;
    sf::Color background_color(255,255,0);
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
            cout<<" ("<<vertices_x<<", "<<vertices_y<<")\t";
            //cout<<triangle.second.point_in_bounds(vertices_x, vertices_y);
        }
        cout<<endl;

    }

    // Rendering
    ray_tracing ray_tracing(image);
    sf::Image result = ray_tracing.render(background_color);

    // Saving result
    sf::Vector2u size = result.getSize();
    cout << "Image dimensions " << size.x << " x " << size.y << endl;
    cout << "Ray tracing rendering time: \t"<< ray_tracing.getDuration()<< " microseconds."<< endl;

//    // Check if the image contains any pixel data
//    if (size.x == 0 || size.y == 0) {
//        std::cerr << "Error: Image is empty (no size or pixel data)." << std::endl;
//        return -1;
//    }

    //Rasterization Rendering
    rasterization rasterization(image,background_color);
    sf::Image result2 = rasterization.render();

    //Saving result
    sf::Vector2u size2 = result2.getSize();
    cout << "Image 2 dimensions " << size2.x << " x " << size2.y << endl;
    cout << "Rasterization rendering time: \t" << rasterization.getDuration() << " microseconds." << endl;

    // Making sure the output directory is present
    cout << "Current working directory: "<< filesystem::current_path() << endl;
    string outputDir = "output";
    if (!filesystem::exists(outputDir)) {
        if (!filesystem::create_directory(outputDir)) {
            cerr << "Failure creating output directory: " << outputDir << endl;
            return -1;
        }
    }
    // Saving rendering
    string filePath = outputDir + "/ray_tracing.png";
    string filePath2 = outputDir + "/rasterization.png";
    if (result.saveToFile(filePath)) {
        cout << "Ray tracing rendering saved as \"ray_tracing.png\"" << endl;
    } else {
        cerr << "Failed attempt to save ray tracing rendering" << endl;
    }
    if (result2.saveToFile(filePath2)){
        cout << "Rasterization rendering saved as \"rasterization.png\"" << endl;
    } else {
        cerr << "Failed attempt to save rasterization rendering" << endl;
    }

    sf::Texture rendering_image;
    rendering_image.loadFromFile("output/ray_tracing.png");
    sf::Sprite main_image;
    main_image.setTexture(rendering_image);
    main_image.setPosition(0,0);

    sf::Texture button_texture;
    button_texture.loadFromFile("files/images/Button.png");
    sf::Sprite button;
    button.setTexture(button_texture);
    button.setPosition(460, 50);

    sf::RenderWindow application_window(sf::VideoMode(1200,1200), "Ray-Tracing vs Rasterization", sf::Style::Close);
    application_window.setVerticalSyncEnabled(true);

    sf::Event event;

    while(application_window.isOpen()) {
        //This wasn't working until I put this in and it somehow fixed it I hate computers
        while(application_window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                application_window.close();
            }
        }
        application_window.clear(sf::Color(128,128,128,255));
        application_window.draw(main_image);
        application_window.draw(button);
        application_window.display();
    }


    return 0;
}
