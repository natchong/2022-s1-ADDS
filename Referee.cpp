#include "Referee.h"

//default constructor
Referee::Referee(){
    winner = nullptr;
}

Player* Referee::refGame(Player* player1, Player* player2){
    
    //passing makeMove to get player Human move
    string humanMove = player1->makeMove();
    
    //passing makeMove to get Computer move
    string computerMove = player2->makeMove();


        if((humanMove -> getName()) == (computerMove -> getName()){
            std::cout << "Tie!" << std::endl;
            return nullptr;
        } else if (humanMove->winner(computerMove) == true){
            return player1;
        } else {
            return player2;
        }
}



