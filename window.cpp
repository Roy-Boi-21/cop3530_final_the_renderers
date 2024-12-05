//
// Created by JohnB on 12/4/2024.
//

#include <filesystem>
#include "window.h"
#include "ray_tracing.h"
#include "rasterization.h"

/// ===== CONSTRUCTORS =====
/* Parameterized Constructor
 *
 * Creates a window object with parameters RenderWindow, texture map, image width/height, and image background color
 *
 * Parameters: sf::RenderWindow &window, map<string, sf::Texture> &texture_map, int image_width, int image_height, sf::Color backround_color.
 */
window::window(sf::RenderWindow &window, map<string, sf::Texture> &texture_map, int image_width, int image_height, sf::Color backround_color) {
    application_window = &window;
    displaying_rt = false;
    font.loadFromFile("files/arial.ttf");
    img_width = image_width;
    img_height = image_height;
    bg_color = backround_color;

    //Creates sprites and texts
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

    rt_total_time = 0;
    ras_total_time = 0;

    ras_image.scale(6,6);
    rt_image.scale(6,6);

}

//Returns whether a point is within the bounds of a button sprite
bool window::buttonClick(sf::Sprite &button, float position_x, float position_y) {
    if (button.getGlobalBounds().contains(position_x,position_y)){
        return true;
    }
    return false;
}

void window::randomizeTriangles() {
    rt_total_time = 0.0;
    ras_total_time = 0.0;
    sf::Image result1;
    sf::Image result2;
    images.clear();
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 generator(seed);
    unsigned int rand_num = unsigned (generator() % 1700);
    //Creates 1700 new scenes with the saved width and height each with 20 triangles
    for(int i = 0; i < 1700; i++){
        images.push_back(scene(0, img_width, 0, img_height));
        for(int j=0; j<20; j++){
            images[i].generate_triangle();
        }
        //Records the total time it took for each rendering process to render all the scenes
        ray_tracing ray_tracing(images[i]);
        result1 = ray_tracing.render(bg_color);
        rt_total_time += ray_tracing.getDuration();
        rasterization rasterization(images[i],bg_color);
        result2 = rasterization.render();
        ras_total_time += rasterization.getDuration();
        //Only save the pngs of a randomly chosen scene
        if(i == rand_num){
            string outputDir = "output";
            string filePath = outputDir + "/ray_tracing.png";
            string filePath2 = outputDir + "/rasterization.png";
            result1.saveToFile(filePath);
            result2.saveToFile(filePath2);
        }
    }
    //Converts the duration from microseconds to seconds and displays it
    rt_text.setString(to_string(rt_total_time/1000000) + "s");
    ras_text.setString(to_string(ras_total_time/1000000) + "s");

    //Changes the texture for the image sprites
    rt_tex.loadFromFile("output/ray_tracing.png");
    rt_image.setTexture(rt_tex);
    ras_tex.loadFromFile("output/rasterization.png");
    ras_image.setTexture(ras_tex);

    //Draws the changes
    draw();
}

void window::whileRunning() {
    float mouse_x;
    float mouse_y;
    //When an event occurs on the application window
    while(application_window->pollEvent(event)) {
        //Closes the application if red X is pressed
        if (event.type == sf::Event::Closed) {
            application_window->close();
        }
        //If mouse is pressed
        else if(event.type == sf::Event::MouseButtonPressed){
            //Saves mouse coordinates
            mouse_x = mouse.getPosition(*application_window).x;
            mouse_y = mouse.getPosition(*application_window).y;

            //If Randomize Triangles buttons is pressed, generates and renders new scenes and displays one of them
            if(buttonClick(rand_Triangles, mouse_x, mouse_y)){
                randomizeTriangles();
            }

            //Switches between displaying ray-tracing and rasterization rendering
            if(buttonClick(rt_button, mouse_x, mouse_y)){
                displaying_rt = true;
                draw();
            }

            if(buttonClick(ras_button, mouse_x, mouse_y)){
                displaying_rt = false;
                draw();
            }
        }
    }

}

//Clears the UI and draws all the sprites/text
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

//Helper function used to set text box centered at specific coordinates
void window::setText(sf::Text &text, float x, float y){
    sf::FloatRect textRect = text.getLocalBounds();
    text.setOrigin(textRect.left + textRect.width/2.0f,
                   textRect.top + textRect.height/2.0f);
    text.setPosition(sf::Vector2f(x, y));
}
