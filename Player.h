//
// Created by PRO on 07.06.2021.
//

#ifndef PLAYER_H
#define PLAYER_H

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include <cstdio>
#include <cmath>
#include <vector>

class Player {

    sf::RenderWindow * window;
    sf::Texture texture;
    sf::Texture texture2;
    sf::Texture texture3;
    sf::Texture texture4;
    sf::Sprite sk;

    sf::Sprite player;
    std::vector<sf::Sprite> bird;

    int width;
    int height;



    double x;
    double y;
    double vx;

    double parabola;
    sf::Clock parabolaClock;
    double vel;

    bool start;

public:
    Player();
    Player(sf::RenderWindow * wnd, int w, int h);


    void move( );
    bool collisionR();
    bool collisionL();
    void update();
    void render();
    void change();
    bool collisionDownandUp();

    bool col_spikes(std::vector<sf::Sprite>  position1);

    bool points(sf::Vector2i position);

    sf::Vector2i vecBird();


};


#endif //PLAYER_H
