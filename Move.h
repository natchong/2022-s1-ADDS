#ifndef MOVE_H
#define MOVE_H

class Move{
    
    public:
    
    virtual std::string getName()=0;
    bool winner(Move* playerMove);
    
    
};
#endif