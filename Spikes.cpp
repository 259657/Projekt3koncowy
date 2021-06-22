//
// Created by PRO on 15.06.2021.
//

#include "Spikes.h"
#include  <iostream>
#include <cstdlib>


Spikes::Spikes() {

}

Spikes::Spikes(sf::RenderWindow* wnd, int w, int h):window(wnd), width(w), height(h) {

   amount = 0;
    max = 15;
    min = 3;
    size =20;
    //x = 10;
     max_y = 530;
     min_y = 40;





}





void Spikes::random(int pos)
{
    //srand( time(NULL));
      amount = min + rand() % (max-min+1);
   std::cout<<amount<<std::endl;


    int i =0;
   do {

       ran = min_y + rand() % (max_y - min_y + 1) / size * size;
       std::cout<<ran<<std::endl;
spike.setPosition(10,ran*1.0);
       objects.push_back(this->spike);


//if(player.getPosition().x <= position.x+20 &&player.getPosition().x >= position.x-20 && player.getPosition().y >= position.y-20 &&player.getPosition().y <= position.y +20)

       if (ran <= objects[i - 1].getPosition().y + 20 &&
              ran >= objects[i - 1].getPosition().y - 20) { // wroc tutaj !!!!!!!!!!!!!!!!!!!!!!

       } else {


           objects[i].setPosition(pos, ran);

       ++i;
   }


   this->page = pos;

   }while(i != amount);

}






void Spikes::update() {

}

void Spikes::render() {
    if (texture.loadFromFile("../rsc/igla.png")) {}
    else {
        std::cout << "Nie wczytano tekstur" << std::endl;
    }
    if (texture2.loadFromFile("../rsc/igla2.png")) {}
    else {
        std::cout << "Nie wczytano tekstur" << std::endl;
    }


    //spikes[0].setTexture(texture);
    //window->draw(spikes[0]);
for (int j = 0 ; j <amount;++j)
{

    if(page ==10){
        objects[j].setTexture(texture);
    }
    if(page == 758)
    {
        objects[j].setTexture(texture2);
    }
    window->draw(objects[j]);
}

}




std::vector<sf::Sprite> Spikes::vecSpike() {
   return objects;
}




