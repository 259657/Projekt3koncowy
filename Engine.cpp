
#include "Engine.h"

#include <iostream>

Engine::Engine()
{
    width = 800;
    height = 600;
    window = new sf::RenderWindow(sf::VideoMode(width, height), "C++");
    window->setFramerateLimit(30);
    window->setVerticalSyncEnabled(false);

    initPlayer();
    initBackground();
    initBorder();
    initSpike();
    initFruit();

}
void Engine::initSpike()
{
    spikez = Spikes(window, width, height);
}
void Engine::initFruit()
{
    fruit = Fruit(window, width, height);
}

void Engine::initPlayer()
{
    player = Player(window, width, height);
}
void Engine::initBackground() {
    background = Background(window);
}
void Engine::initBorder() {
    border = Border(window, width, height);
}


void Engine::updateSFMLEvent()
{

    while (window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window->close();
    }


   if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    {

        player.move();

    }


}

void Engine::update()
{

    if (player.points(fruit.fruitPos()))
    {
        std::cout<<"dziala"<<std::endl;

            fruit.random();
    }

    if(player.collisionR())
    {

        player.change();
//std::cout<<"dziala"<<std::endl;
        spikez.random(10);
       // spikez.rotateP();

    }
    if(player.collisionL())
    {
initSpike();

        player.change();
        //spikez.rotateL();
      spikez.random(758);

        //spikez.rotateP();

    }
    if(player.collisionDownandUp())
    {
        initPlayer();
        initSpike();
        fruit.random();
    }
    if(player.col_spikes(spikez.vecSpike()))
    {
        initPlayer();
        initSpike();
        fruit.random();
    }
    updateSFMLEvent();


    player.update();

}


void Engine::render()
{
    window->clear();

    background.render();

    border.render();

    fruit.render();

    spikez.render();

    player.render();


    window->display();

}


void Engine::run()
{
    while (window->isOpen())
    {
        update();
        render();

    }


}