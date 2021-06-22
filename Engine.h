#ifndef ENGINE_H_
#define ENGINE_H_

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "Player.h"
#include "Background.h"
#include "Border.h"
#include "Spikes.h"
#include "Fruit.h"
#include <cstdlib>



class Engine
{


    sf::RenderWindow * window;
    sf::Event event;

    int width;
    int  height;

    Player player;
    Background background;
    Border border;

    Fruit fruit;

    Spikes spikez;

    void initBackground();
    void initPlayer();
    void initBorder();
    void initSpike();
    void initFruit();
public:

    Engine();


    void updateSFMLEvent();
    void update();
    void render();
    void run();



};
#endif
