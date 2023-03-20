#include "Reverser.h"
using namespace std;

int Reverser::reverseDigit(int value){ 
    return reverseDigitRecursive(value, 0);
}

int Reverser:: reverseDigitRecursive(int value, int reversedValue){
    if (value==0){
        return reversedValue;
    }


int last = value % 10;
reversedValue = reversedValue * 10 + last;

return reverseDigitRecursive(value/10, reversedValue);
}
