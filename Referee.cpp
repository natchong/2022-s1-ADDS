#include "Referee.h"

//default constructor
Referee::Referee(){
    winner = nullptr;
}

Player* Referee::refGame(Player* player1, Player* player2){
    
    //passing makeMove to get player Human move
    char humanMove = player1->makeMove();
    
    //passing makeMove to get Computer move
    char computerMove = player2->makeMove();


        if(humanMove == computerMove){
            return nullptr;
        } else if((humanMove == 'R' && computerMove == 'S') || (humanMove == 'P' && computerMove == 'R') || (humanMove == 'S' && computerMove == 'P')){
            winner = player1;
        } else if ((humanMove == 'S' && computerMove == 'R') || (humanMove == 'R' && computerMove == 'P') || (humanMove == 'P' && computerMove == 'S')){
            winner = player2;
        }
    return winner;
}



