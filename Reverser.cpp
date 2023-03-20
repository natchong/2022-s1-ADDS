#include "Reverser.h"
using namespace std;
#include <string>

int Reverser::reverseDigit(int value){
    if(value < 10){
        return value;
    }
    int a = value % 10;
    int b = value / 10;
    int reversed = reverseDigit(b);
    int numOfDigits = 1 ;
    int temp = b;
    while (temp > 0 ){
        numOfDigits *= 10;
        temp /= 10;
    }

    return a * numOfDigits + reversed;
}

std::string Reverser::reverseString(std::string characters){
    if(characters.length() == 1){
        return characters;
    } 
    char first = characters[0];
    std::string others = characters.substr(1);
    return reverseString(others) + first;
}