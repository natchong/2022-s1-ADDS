#ifndef HUMAN_H
#define HUMAN_H

#include "Referee.h"
#include <string>
#include <iostream>
#include <stdlib.h>

class Human{
    private:
    std::string HumanMove;
    int NumGames;

    public:
    Human();
    void setHumanMove();
    std::string getHumanMove();

    void setNumGames();
    int getNumGames();


};

#endif