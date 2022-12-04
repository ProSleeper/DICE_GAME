#include "player.h"
#include "dice.h"

Player::Player(std::string name) : m_sName(name), m_iTotalScore(0){
}

Player::~Player(){
}

int Player::rollTheDice(Dice* dice){

    int randValue = dice->randValue();
    m_iTotalScore += randValue;
    return randValue;
}

int Player::getTotalScore(){
    return m_iTotalScore; 
}

std::string Player::getName(){
    return m_sName;
}




