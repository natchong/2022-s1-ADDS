#include "Human.h"
using namespace std;
#include <iostream>

//default constructor
Human::Human(){
}

//constructor for Human
std::string Human::getName(){
    std::cout <<"Please enter your name: "<< std::endl;
    std::cin >> name;
    return name;
}

char Human::playerMove(){

    char move;

    std::cout << "Please enter R if you choose Rock "<< std::endl;
    std::cout << "Please enter P if you choose Paper "<< std::endl;
    std::cout << "Please enter S if you choose Scissors "<< std::endl;

    std::cin >>move;

    while (move!='R' && move!='P' && move!='S'){
        std::cout << "Please only enter R, P or S: " << std::endl;
        std::cin >> move;
    }

    return move;
}