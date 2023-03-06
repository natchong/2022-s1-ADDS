#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Player.h"

using namespace std;


int main(){

    //creating an object for referee
    Referee r1;

    //create object for computer
    Computer c1;

    //allocating name to human object
    Human h1("Mei");


    Player* ptr = r1.refGame(&h1, &c1);

    //if the pointer has nullptr prints out Tie if not prints Human name wins
    if(ptr==nullptr){
        std::cout <<"Tie" << std::endl;
    } else {
        std::cout << ptr -> name << " wins" << endl;
    }


    return 0;
}

