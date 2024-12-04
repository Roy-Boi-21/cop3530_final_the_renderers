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
    bool clicked = false;

    sf::RenderWindow* application_window;
    sf::Event event;
    sf::Mouse mouse;

    sf::Sprite randomizeTriangles;
    sf::Sprite rtButton;
    sf::Sprite rasButton;
    sf::Sprite rtImage;
    sf::Sprite rasImage;
    sf::Sprite rtTime;
    sf::Sprite rasTime;


public:
    window(sf::RenderWindow& window);
    void resetWindow();

};


#endif //PROJECTS_WINDOW_H
