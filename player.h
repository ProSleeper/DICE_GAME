#ifndef __PLAYER_H
#define __PLAYER_H

#include <string>

class Dice;

class Player{
protected:
    std::string m_sName;
    int m_iTotalScore;
public:
    Player(std::string name);
    virtual ~Player();
    int rollTheDice(Dice* dice);
    int getTotalScore();
    std::string getName();
};


#endif

