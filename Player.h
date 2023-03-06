#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{

    public:
    std::string name;
    char move;
    Player(); //default constructor
    virtual char makeMove()=0 ; //virtual function=0 so could be used for extension in different classes
    std::string getName();
};

#endif