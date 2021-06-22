#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "Engine.h"
#include "Player.h"
#include "Background.h"
#include <cstdlib>



int main()
{
    srand(time(NULL));
    Engine game;

    game.run();

    return 0;
}

