#ifndef REFEREE_H
#define REFEREE_H


#include "Player.h"
#include <iostream>

class Referee : public Player{
    public:
    Referee();
    Player* playGame(Player* player1, Player* player2);
};

#endif