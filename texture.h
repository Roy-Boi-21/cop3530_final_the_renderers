//
// Created by JohnB on 12/4/2024.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

#ifndef PROJECTS_TEXTURE_H
#define PROJECTS_TEXTURE_H

struct texture{
    map<string, sf::Texture> texture_storage;
    texture(){
        sf::Texture rasViewTex;
        rasViewTex.loadFromFile("files/images/Button Ras View.png");
        texture_storage.emplace("Ras View", rasViewTex);
        sf::Texture rayViewTex;
        rayViewTex.loadFromFile("files/images/Button Ray View.png");
        texture_storage.emplace("Ray View", rayViewTex);
        sf::Texture triangleTex;
        triangleTex.loadFromFile("files/images/Button Triangles.png");
        texture_storage.emplace("Triangles", triangleTex);
        sf::Texture rasTimeTex;
        rasTimeTex.loadFromFile("files/images/Ras Time.png");
        texture_storage.emplace("Ras Time", rasTimeTex);
        sf::Texture rayTimeTex;
        rayTimeTex.loadFromFile("files/images/Ray Time.png");
        texture_storage.emplace("Ray Time", rayTimeTex);
        sf::Texture blankTex;
        blankTex.loadFromFile("output/Blank.png");
        texture_storage.emplace("Blank", blankTex);
    }
    map<string,sf::Texture> getTextMap() const{
        return texture_storage;
    }
};

#endif //PROJECTS_TEXTURE_H

