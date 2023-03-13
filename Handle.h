#ifndef HANDLE_H
#define HANDLE_H
#include "Move.h"

class Handle: public Move{
    public:
    Move* throwMove();
};
#endif