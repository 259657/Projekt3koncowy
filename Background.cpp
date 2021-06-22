//
// Created by PRO on 11.06.2021.
//

#include "Background.h"

#include <iostream>

Background::Background()
{

}

Background::Background(sf::RenderWindow* window):window(window)
{





}




void Background::render()
{
    if (texture.loadFromFile("../rsc/background1.png")) {}
    else {
        std::cout << "Nie wczytano tekstur" << std::endl;
    }


    background.setTexture(texture);
   // background.setPosition(0,0);
        window->draw(background);

}

