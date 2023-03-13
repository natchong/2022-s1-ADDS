#include "Human.h"
using namespace std;
#include <iostream>

//default constructor
Human::Human(){
    name = "Human"; //set name to Human for default
}


Human::Human(std::string Name) {
    name = Name;
}

//constructor for Human
std::string Human::getName(){
    return this->name;
}

Move* Human::makeMove(){
    Move* move = userInput.throwMove();
    return move
}