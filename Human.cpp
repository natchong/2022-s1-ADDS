#include "Human.h"
using namespace std;
#include <iostream>

//default constructor
Human::Human(){
    name = "Human"; //set name to Human for default
    move = ' '; // no move for default
}

//constructor for Human
Human::Human(string getName){
    name = getName;
    move = ' ';
}

char Human::makeMove(){

    std::cout << "Enter move: ";

    std::cin >>move;
    
    //while loop when Human player enters any other letter than R,P,S
    while (move!='R' && move!='P' && move!='S'){
        std::cout << "Please only enter R, P or S: " << std::endl;
        std::cin >> move;
    }

    return move;
}