#ifndef REFEREE_H
#define REFEREE_H
#include <string>
#include <iostream>

#include "Human.h"
#include "Computer.h"

class Referee{
    private:
    int NumGames;
    std::string winner;
    std::string output;
    
    public:
    Referee (int GamesNeededFor);
    int GetNumGames();
    void SetNumGames();
    void play();
    void results();
};

#endif