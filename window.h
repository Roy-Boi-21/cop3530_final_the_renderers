//
// Created by JohnB on 12/4/2024.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include "scene.h"

#ifndef PROJECTS_WINDOW_H
#define PROJECTS_WINDOW_H

using namespace std;

class window {
    //Class variables
    int img_width;
    int img_height;
    sf::Color bg_color;

    sf::RenderWindow* application_window;
    sf::Font font;
    sf::Text rt_text;
    sf::Text ras_text;
    sf::Event event;
    sf::Mouse mouse;

    sf::Sprite rand_Triangles;
    sf::Sprite rt_button;
    sf::Sprite ras_button;
    sf::Sprite rt_image;
    sf::Sprite ras_image;
    sf::Sprite rt_time;
    sf::Sprite ras_time;

    sf::Texture rt_tex;
    sf::Texture ras_tex;

    vector<scene> images;
    long long rt_total_time;
    long long ras_total_time;
    bool displaying_rt;



public:
    //Constructor
    window(sf::RenderWindow& window, map<string, sf::Texture> &texture_map, int image_width, int image_height, sf::Color backround_color);

    //Class methods
    void randomizeTriangles();
    void whileRunning();
    bool buttonClick(sf::Sprite &button, float position_x, float position_y);
    void draw();
    void setText(sf::Text &text, float x, float y);

};


#endif //PROJECTS_WINDOW_H
