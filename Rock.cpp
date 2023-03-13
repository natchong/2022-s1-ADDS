#include "Rock.h"
#include "Move.h"

Rock::Rock(){
    this->name = "Rock";
    winners = {"Scissors"};
    losers = {"Paper" };
}