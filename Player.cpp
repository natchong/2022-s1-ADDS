#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(){
};

std::string Player::playerName(){
    return name;
}

char Player::playerMove(){
   char move ='R';
    return move;
}