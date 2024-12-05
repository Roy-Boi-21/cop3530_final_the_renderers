#include <filesystem>
#include <SFML/Graphics/Image.hpp>
#include <SFML/Graphics.hpp>
#include "scene.h"
#include "texture.h"
#include "window.h"

using namespace std;

int main() {

    // Setting initial variables
    int image_width = 150;
    int image_height = 150;
    texture texture_class;
    map<string, sf::Texture> textureMap = texture_class.getTextMap();
    sf::Color background_color(0,0,0);

    //Creating application window for UI
    sf::RenderWindow application_window(sf::VideoMode(1200,1200), "Ray-Tracing vs Rasterization", sf::Style::Close);
    application_window.setVerticalSyncEnabled(true);

    window window_screen(application_window, textureMap, image_width, image_height, background_color);

    //Main loop for running UI
    while(application_window.isOpen()) {
        window_screen.whileRunning();
        window_screen.draw();
    }

    return 0;
}
