#include "Referee.h"
using namespace std;

//default constructor
Referee::Referee(){
}

Player* Referee::playGame(Player* player1, Player* player2){
    
    //set a pointer to player
    Player * winner;

    std::string name = player1->playerName();
    std::string computerName= player2->playerName();

    char humanMove = player1->playerMove();
    char computerMove = player2->playerMove();

    for(int i=0; i<1; i++){
        if(humanMove == computerMove){
            return nullptr;
        } else if (humanMove == 'P' && computerMove == 'R'){
            winner = player1;
            std::cout << name << "You win" << std::endl;
        } else if (humanMove == 'S' && computerMove == 'R'){
            winner = player2;
            std::cout<< computerName << "You lost"<< std::endl;
        }
    }
    return winner;
}



