#include "Reverser.cpp"
#include <iostream>
using namespace std;

int main(){
    Reverser r;

    int value= 12345;
    int reversedValue= r.reverseDigit(value);
    std::cout << "Reverse of " << value << "is" << reversedValue <<std::endl;

    std::string characters = "natasha";
    std::string reversedCharacters = r.reverseString(characters);
    std::cout << "Reverse of " << characters << "is" << reversedCharacters <<std::endl;

    return 0;

}