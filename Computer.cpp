#include "Computer.h"
using namespace std;

//default constructor
Computer::Computer(){
    name = "Computer"; //set name to Computer
    move = ' '; //no move for default constructor
}


char Computer::makeMove(){
    char move = 'R'; // set Computer's move to always Rock
    return move;
}
