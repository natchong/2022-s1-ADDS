#include "Handle.h"
#include <iostream>

std::unordered_map<std::string, Handle::name> Handle::mappedMoves={
    { "Rock", Handle::name::Rock },
    { "Paper", Handle::name::Paper },
    { "Scissors", Handle::name::Scissors },
    { "Robot", Handle::name::Robot },
    { "Monkey", Handle::name::Monkey },
    { "Pirate", Handle::name::Pirate },
    { "Ninja", Handle::name::Ninja },
    { "Zombie", Handle::name::Zombie },

};

Move* Handle::throwMove(){
    std::string inputMove;
    bool isMoveHere = true;
    
    while(isMoveHere) {
        isMoveHere = true;
        std::cin >> inputMove;
        
        switch (mappedMoves [inputMove]){
            case name::Rock;
            return new Rock;
            break;
            
            case name::Paper;
            return new Paper;
            break;
            
            case name::Scissors;
            return new Scissors;
            break;
            
            case name::Robot;
            return new Robot;
            break;
            
            case name::Monkey;
            return new Monkey;
            break;
            
            case name::Pirate;
            return new Pirate;
            break;
            
            case name::Ninja;
            return new Ninja;
            break;
            
            case name::Zombie;
            return new Zombie;
            break;
            
            default:
            isMoveHere = false;
        }
    }
    return nullptr;
