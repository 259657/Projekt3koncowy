//
// Created by PRO on 15.06.2021.
//

#include "Border.h"

#include <iostream>


Border::Border()
{

}


Border::Border(sf::RenderWindow *wnd, int w, int h):window(wnd),width(w), height(h)
{
    border1.setPosition(790,0);
    border2.setPosition(-10,0);
    border3.setPosition(0,0);
    border4.setPosition(0,570);
}



void Border::render()
{
    if (texture1.loadFromFile("../rsc/sciana.png")) {}
    else {
        std::cout << "Nie wczytano tekstur" << std::endl;
    }
    if (texture2.loadFromFile("../rsc/sufit.png")) {}
    else {
        std::cout << "Nie wczytano tekstur" << std::endl;
    }
    if (texture3.loadFromFile("../rsc/podloga.png")) {}
    else {
        std::cout << "Nie wczytano tekstur" << std::endl;
    }


    border1.setTexture(texture1);
    border2.setTexture(texture1);
    border3.setTexture(texture2);
    border4.setTexture(texture3);

    window->draw(border1);
    window->draw(border2);
    window->draw(border3);
    window->draw(border4);
}


