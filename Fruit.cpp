//
// Created by PRO on 15.06.2021.
//

#include "Fruit.h"
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include <vector>

#include <iostream>

Fruit::Fruit()
{
}





Fruit::Fruit(sf::RenderWindow* wnd, int w, int h):window(wnd), width(w), height(h)
{

    //std::cout<<x<<"y"<<y<<std::endl;
}



void Fruit::render()
{
    if (texture.loadFromFile("../rsc/cukier.png")) {}
    else {
        std::cout << "Nie wczytano tekstur" << std::endl;
    }

    sprite.setTexture(texture);

    window->draw(sprite);

}

sf::Vector2i Fruit::fruitPos()
{
    return sf::Vector2i(x, y);
}

void Fruit::random() {
    bool putonboard;
    size = 20;



    do{
        putonboard = true;

        x=  rand() % 100 +600  ;
        y=rand() % 100 + 400;




    }while(!putonboard);





    sprite.setPosition(x, y);
}
