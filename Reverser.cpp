#include "Reverser.h"
using namespace std;

int Reverser::reverseDigit(int value){
    if(value < 10){
        return value;
    }
    int remainder = value % 10;
    int quotient = value / 10;
    int reversed = reverseDigit(quotient);
    int numOfDigits = 1 ;
    int temp = quotient;
    while (temp > 0 ){
        numOfDigits *= 10;
        temp /= 10;
    }

    return remainder * numOfDigits + reversed;
}

std::string Reverser::reverseString(std::string characters){
    if(characters.length() == 1){
        return characters;
    } 
    char first = characters[0];
    std::string rest = characters.substr(1);
    return reverseString(rest) + first;
}