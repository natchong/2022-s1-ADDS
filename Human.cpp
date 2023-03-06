#include "Human.h"
using namespace std;
#include <iostream>

//default constructor
Human::Human(){
    name = "Human";
    move = '\0';
}

//constructor for Human
Human::Human(string playerName){
    name = playerName;
    move = '\0';
}

char Human::playerMove(){

    std::cout << "Please enter: ";

    std::cin >>move;

    while (move!='R' && move!='P' && move!='S'){
        std::cout << "Please only enter R, P or S: " << std::endl;
        std::cin >> move;
    }

    return move;
}