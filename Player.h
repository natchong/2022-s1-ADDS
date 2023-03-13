#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
    protected:
    std::string name;


    public:

    Player(); //default constructor
    std::string getName();
    virtual Move* makeMove()=0; //virtual constructor
    ~Player();
};

#endif