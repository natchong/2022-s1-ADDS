#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"


class Human : public Player{

    public:
    Human(); // default constructor
    Human(std::string getName);
    char playerMove();
};

#endif