#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Player.h"

using namespace std;
#include <iostream>


int main(){
    std::string name;

    std::cout<< "Please enter your name: " <<std::endl;
    std::cin >> name ;

    Referee r1;

    Player* player1 = new Human();
    Player* player2 = new Computer();


    r1.playGame(player1,player2);
    std::cout<< "Thanks for playing " <<name <<std::endl;



    return 0;
}

