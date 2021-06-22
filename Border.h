//
// Created by PRO on 15.06.2021.
//

#ifndef _BORDER_H
#define _BORDER_H

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
class Border{

    sf::RenderWindow * window;
    sf::Texture texture1;
    sf::Texture texture2;
    sf::Texture texture3;

    sf::Sprite border1;
    sf::Sprite border2;
    sf::Sprite border3;
    sf::Sprite border4;


    int width;
    int height;

public:
    Border();
    Border(sf::RenderWindow * wnd, int w, int h);


    void render();

};



#endif //UNTILED_BORDER_H
