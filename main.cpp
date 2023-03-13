#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Player.h"
#include "Move.h"
#include "Handle.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Robot.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Ninja.h"
#include <iostream>

using namespace std;


int main(){

    //creating an object for referee
    Referee r1;

    //create object for computer
    Player* p1 = new Human("Mei");
    Player* p2 = new Human("Nat");


    Player* ptr = r1.refGame(&p1, &p2);

    std::cout << game->getName() <<std::endl;

    return 0;
}

