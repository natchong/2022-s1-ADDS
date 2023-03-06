#include "Referee.h"

//default constructor
Referee::Referee(){
    winner = nullptr;
}

Player* Referee::playGame(Player* player1, Player* player2){


    char humanMove = player1->playerMove();
    char computerMove = player2->playerMove();


        if(humanMove == computerMove){
            return nullptr;
        } else if((humanMove == 'S' && computerMove == 'R') || (humanMove == 'R' && computerMove == 'P') || (humanMove == 'P' && computerMove == 'S')){
            winner = player2;
        } else if ((humanMove == 'R' && computerMove == 'S') || (humanMove == 'P' && computerMove == 'R') || (humanMove == 'S' && computerMove == 'P')){
            winner = player1;
        }
    return winner;
}



