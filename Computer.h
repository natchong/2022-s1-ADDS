#ifndef COMPUTER_H
#define COMPUTER_H

#include "Referee.h"
#include <string>
#include <iostream>

class Computer{
    private:
    std::string ComputerMove;

    public:
    Computer(int games);
    std::string getComputerMove();
};

#endif