#pragma once
#include <iostream>

struct Player{
    int hp = 5;
    void ShowHP(){
        std::cout << "player hp is " << hp << std::endl;        
    }
};
