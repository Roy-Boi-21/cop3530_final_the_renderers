//
// Created by JohnB on 12/4/2024.
//

#include "window.h"

window::window(sf::RenderWindow &window, map<string, sf::Texture> &texture_map, int image_width, int image_height, sf::Color backround_color) {
    application_window = &window;
    displaying_rt = false;
    font.loadFromFile("files/arial.ttf");

    ras_text.setFont(font);
    ras_text.setString("00.00s");
    ras_text.setCharacterSize(27);
    ras_text.setFillColor(sf::Color::Black);
    setText(ras_text, 1050, 466);

    rt_text.setFont(font);
    rt_text.setString("00.00s");
    rt_text.setCharacterSize(27);
    rt_text.setFillColor(sf::Color::Black);
    setText(rt_text, 1050, 566);


    rand_Triangles.setTexture(texture_map["Triangles"]);
    rand_Triangles.setPosition(900,100);
    ras_time.setTexture(texture_map["Ras Time"]);
    ras_time.setPosition(900,300);
    rt_time.setTexture(texture_map["Ray Time"]);
    rt_time.setPosition(900,400);
    rt_image.setTexture(texture_map["Blank"]);
    rt_image.setPosition(0,0);
    ras_image.setTexture(texture_map["Blank"]);
    ras_image.setPosition(0,0);
    rt_button.setTexture(texture_map["Ray View"]);
    rt_button.setPosition(100,900);
    ras_button.setTexture(texture_map["Ras View"]);
    ras_button.setPosition(500,900);

    //generate triangles

}

bool window::buttonClick(sf::Sprite &button, float position_x, float position_y) {
    if (button.getGlobalBounds().contains(position_x,position_y)){
        return true;
    }
    return false;
}

void window::randomizeTriangles() {

}

void window::whileRunning() {
    float mouse_x;
    float mouse_y;
    while(application_window->pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            application_window->close();
        }
        else if(event.type == sf::Event::MouseButtonPressed){
            mouse_x = mouse.getPosition(*application_window).x;
            mouse_y = mouse.getPosition(*application_window).y;
            cout << mouse_x << endl;
            cout << mouse_y << endl;


            if(buttonClick(rand_Triangles, mouse_x, mouse_y)){

            }

            if(buttonClick(rt_button, mouse_x, mouse_y)){
                rt_tex.loadFromFile("output/ray_tracing.png");
                rt_image.setTexture(rt_tex);
                draw();
            }

            if(buttonClick(ras_button, mouse_x, mouse_y)){
                ras_tex.loadFromFile("output/rasterization.png");
                ras_image.setTexture(ras_tex);
                draw();
            }
        }
    }

}

void window::draw() {
    application_window->clear(sf::Color(128,128,128,255));

    if(displaying_rt){
        application_window->draw(rt_image);
    }
    else{
        application_window->draw(ras_image);
    }
    application_window->draw(rand_Triangles);
    application_window->draw(ras_time);
    application_window->draw(rt_time);
    application_window->draw(ras_button);
    application_window->draw(rt_button);
    application_window->draw(ras_text);
    application_window->draw(rt_text);
    application_window->display();

}

void window::setText(sf::Text &text, float x, float y){
    sf::FloatRect textRect = text.getLocalBounds();
    text.setOrigin(textRect.left + textRect.width/2.0f,
                   textRect.top + textRect.height/2.0f);
    text.setPosition(sf::Vector2f(x, y));
}
