#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player{
    
    
    public:
    Computer(); //default constructor
    std::string getName();
    char playerMove();
};

#endif