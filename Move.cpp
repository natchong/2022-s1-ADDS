#include "Move.h"
using namespace std;
#include <iostream>



std::string Move::getName(){
    return this ->name;
}

bool Move::winner(Move* playerMove){
    std::string move = playerMove -> getName();
    
    if (find(winners.begin(), winners.end(), move) != winners.end()){
        return true;
    }
    
    if(find(losers.begin(), losers.end(), move) != losers.end()){
        return false;
    }
    else 
    return 
}