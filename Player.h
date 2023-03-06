#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{

    public:
    std::string name;
    Player(); //default constructor
    virtual char playerMove() ; //virtual function=0 so could be used for extension in different classes
    virtual std::string playerName();
};

#endif