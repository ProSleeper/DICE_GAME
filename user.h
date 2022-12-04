#ifndef __USER_H
#define __USER_H

#include "player.h"

class User : public Player{
private:
    /* data */
public:
    User(std::string name);
    ~User();
};

#endif