//
// Created by PRO on 15.06.2021.
//

#ifndef SPIKES_H_
#define SPIKES_H_
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include <vector>
#include <algorithm>

class Spikes {



    sf::RenderWindow * window;
    sf::Texture texture;
    sf::Texture texture2;
    sf::Sprite spike;

    std::vector<sf::Sprite> objects;


    int width;
    int height;


    int ran;
    int amount;
    int size;
    int max;
    int min;
   // int x;
   // int y;
    int min_y;
    int max_y;
    int page;


public:

    Spikes();
    Spikes(sf::RenderWindow *wnd, int w , int h);


    void random(int pos);
    void update();
    void render();
    std::vector<sf::Sprite> vecSpike();
    void rotateP();
    void rotateL();




};


#endif //UNTILED_SPIKES_H
