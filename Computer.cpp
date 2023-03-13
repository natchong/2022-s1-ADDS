#include "Computer.h"
using namespace std;

//default constructor
Computer::Computer(){
    name = "Computer"; //set name to Computer
    move = " "; //no move for default constructor
}


std::string Computer::makeMove(){
    std::string move = "Rock";// set Computer's move to always Rock
    return move;
}
