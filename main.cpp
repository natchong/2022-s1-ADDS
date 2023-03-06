#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Player.h"

using namespace std;


int main(){

    Referee r1;
    Human h1("Mei");
    Computer c1;

    Player* ptr = r1.refGame(&h1, &c1);

    if(ptr==nullptr){
        std::cout <<"Tie" << std::endl;
    } else {
        std::cout << ptr -> name << " wins" << endl;
    }


    return 0;
}

