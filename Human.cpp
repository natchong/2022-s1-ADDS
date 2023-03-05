#include "Human.h"
using namespace std;

Human::Human(){
    
}

void Human::setHumanMove(){
    string str;
    getline(cin,str);
    HumanMove = str;
}

string Human::getHumanMove(){
    cout <<HumanMove <<endl;
    return HumanMove;
}

void Human::setNumGames(){
    int tempNumGames = stoi(HumanMove.at(0));
    NumGames = tempNumGames;
}

int Human::getNumGames(){
    cout << NumGames << endl;
    return NumGames;
}