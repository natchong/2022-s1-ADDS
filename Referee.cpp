#include "Referee.h"
using namespace std;

Referee::Referee (int GamesNeededFor){
    NumGames = GamesNeededFor;
}

void Referee::play(){
    for(int i=2; i < (2*NumGames+1); i+=2){
        if (Human::HumanMove.at(i)=="R"){
            output.at(i) = "Tie";
            output.at(i+1) = " ";
        }
        if (Human::HumanMove.at(i) == "P"){
            output.at(i) = "Win";
            output.at(i+1) = " ";
        }
        if (Human::HumanMove.at(i) == "S"){
            output.ai(i) = "Lose";
            output.at(i+1) = " ";
        }
    }
}

void Referee::results(){
    for (int i=0; i <(2*NumGames-1); i++){
        cout <<output.at(i)
    }
}