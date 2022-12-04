#ifndef __COMPUTER_H
#define __COMPUTER_H

#include "player.h"

class Computer : public Player{
private:
    /* data */
public:
    Computer(std::string name);
    ~Computer();
};


#endif

