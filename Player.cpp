//
// Created by PRO on 07.06.2021.
//

#include "Player.h"
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

#include <iostream>



Player::Player()
{}

Player::Player(sf::RenderWindow* wnd, int w, int h):window(wnd),width(w), height(h)
{

x = 400;
y = 250;
    vx =  3;

    vel = 0;
    start = false;


}

void Player::update() {

    //std::cout<<player.getPosition().x<<"  "<<player.getPosition().y<<std::endl;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    {
        start = true ;
    }
    if( start == true) {

        parabola = parabolaClock.getElapsedTime().asMicroseconds() / 1000.0 / 1000.0;

        parabolaClock.restart();

       // std::cout << parabola << std::endl;
        //std::cout <<player.getPosition().x<<std::endl;

        vel += parabola * 100;

        y += vel * parabola;

        x += vx;
    }


}

void Player::render() {


    if (texture.loadFromFile("../rsc/ptak.png")) {}
    else {
        std::cout << "Nie wczytano tekstur" << std::endl;
    }
    if (texture2.loadFromFile("../rsc/ptak2.png")) {}
    else {
        std::cout << "Nie wczytano tekstur" << std::endl;
    }
    if (texture3.loadFromFile("../rsc/sk.png")) {}
    else {
        std::cout << "Nie wczytano tekstur" << std::endl;
    }
    if (texture4.loadFromFile("../rsc/sk2.png")) {}
    else {
        std::cout << "Nie wczytano tekstur" << std::endl;
    }

    if (player.getPosition().x >= 755 )
    {
        player.setTexture(texture);
        sk.setTexture(texture3);
    }
    else if(player.getPosition().x < 15  )
    {player.setTexture(texture2);
        sk.setTexture(texture4);}
    //player.setTexture(texture2);

    sk.setPosition(x,y);
    player.setPosition( x, y);

    window->draw(player);
    window->draw(sk);
}



void Player::move( )
{


    if(vx >14 || vx < -14)
    {
        vel = -100;
    }
    else if(vx >40 || vx < -40)
    {
        vel = -120;
    }
    else
    {
        vel = - 80;
    }



}

bool Player::collisionR()
{

    if (player.getPosition().x >= 755 )
    {
      // player.setTexture(texture2);
      // std::cout<<"bom"<<std::endl;
       // if(vx<=10)
        //{
         //   vx+=2;
       // }
        vx+=0.2;
        std::cout<<vx<<std::endl;
        return true;
    }

return false;
}
bool Player::collisionL()
{
    if(player.getPosition().x < 15  )
    {
        //player.setTexture(texture);
        //std::cout<<"bom"<<std::endl;
        //if(vx<=-50)
        //{

       // }
        vx-=0.2;
        std::cout<<vx<<std::endl;
        return true;
    }


    return false;
}


void Player::change()
{
    vx =vx *(-1);
}

bool Player::collisionDownandUp() {
    if (player.getPosition().y >= 530 ||  player.getPosition().y < 45 )
    {
        // player.setTexture(texture2);
       // std::cout<<"bom"<<std::endl;

        return true;
    }
    return false;
    
}

bool Player::col_spikes(std::vector<sf::Sprite>  position1) {


    for(int i = 0; i < position1.size(); ++i) {
       if (player.getPosition().x-5 <= position1[i].getPosition().x+50 && player.getPosition().x+5 >= position1[i].getPosition().x-50
       &&player.getPosition().y >= position1[i].getPosition().y-2 &&player.getPosition().y <= position1[i].getPosition().y+2 )
        {

          std::cout<<"cos"<<std::endl;
            return true;
        }
    }
    return false;
}

bool Player::points(sf::Vector2i position)
{
    if(player.getPosition().x <= position.x+20 &&player.getPosition().x >= position.x-20 && player.getPosition().y >= position.y-20 &&player.getPosition().y <= position.y +20)
    {

        return true;
    }
    return false;
}

sf::Vector2i Player::vecBird() {
    return sf::Vector2i();
}


