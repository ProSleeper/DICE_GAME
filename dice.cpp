#include "dice.h"
#include <random>
#include <iostream>

Dice::Dice(/* args */){
}

Dice::~Dice(){
}

int Dice::randValue(){
    
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 6);
    return dist(gen);
}