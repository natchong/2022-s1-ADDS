#ifndef REVERSE_H
#define REVERSE_H
#include <string>
using namespace std;

class Reverser{
    private:
    int reverseDigitRecursive(int value, int reversedValue);
    std::string reverseStringRecursive(std::string characters, int index);
    public: 
    int reverseDigit(int value);
    std::string reverseString(std::string characters);

};
#endif
