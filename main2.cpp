#include "Reverser.h"
#include <iostream>
using namespace std;

int main(){
    Reverser r;

    int value = 54321;
    int reversedValue = r.reverseDigit(value);
    std::cout << "Reverse value: " << reversedValue << std::endl;

    std::string characters = "natasha";
    std::string reversedString = r.reverseString(characters);
    std::cout << "Reverse string: " << reversedString << std::endl;
    return 0;


}