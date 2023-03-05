#include "Computer.h"
using namespace std;

Computer::Computer(int games){
    string move = "R";
    for (int i=2; i < (2*games); i+=2){
        ComputerMove.at(i) = move;
        ComputerMove.at(i) = " ";
    }
    
    ComputerMove.at(0) = games;
    cout << games << endl;
}

string Computer::getComputerMove(){
    cout << ComputerMove << endl;
    return ComputerMove;
}