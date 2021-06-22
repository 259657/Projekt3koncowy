//
// Created by PRO on 11.06.2021.
//

#ifndef UNTILED_BACKGROUND_H
#define UNTILED_BACKGROUND_H


#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
class Background {
    sf::RenderWindow * window;
    sf::Texture texture;
    sf::Sprite background;

public:
    Background();
    Background(sf::RenderWindow* window);


    void render();

};


#endif //UNTILED_BACKGROUND_H
