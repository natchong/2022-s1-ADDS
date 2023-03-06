#include "Computer.h"
using namespace std;

//default constructor
Computer::Computer(){
}

std::string Computer::getName(){
    return "Computer";
}

char Computer::playerMove(){
    char move = 'R';
    return move;
}
