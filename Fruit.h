//
// Created by PRO on 15.06.2021.
//

#ifndef FRUIT_H_
#define FRUIT_H_


#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

class Fruit
{

    sf::RenderWindow* window;

    sf::Texture texture;
    sf::Sprite sprite;


    int width;
    int height;

    int x;
    int y;
    int size;



public:

    Fruit();
    Fruit(sf::RenderWindow* wnd, int w , int h);


    void render();
    void random();


    sf::Vector2i fruitPos();//pozycja owoca



};
#endif
