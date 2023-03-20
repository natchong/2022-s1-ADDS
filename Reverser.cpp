#include "Reverser.h"
using namespace std;
#include <string>
#include <math.h> 

int Reverser::reverseDigit(int value){
    if (value<0){
        return -1;
    } else { 
        if (value < 10 ){
            return value;
        }
        
    }

    return (value % 10) * (int) pow(10.0, floor(log10(value/10) + 1)) + reverseDigit(value/10);
}

std::string Reverser::reverseString(std::string characters){
    if(characters.length() == 1){
        return characters;
    } 
    char first = characters[0];
    std::string others = characters.substr(1);
    return reverseString(others) + first;
}