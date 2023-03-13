#include "Player.h"

Player::Player(){
    name = " "; //empty name for default
}

std::string Player::getName(){
    return this->name;
}

Player::~Player(){}

