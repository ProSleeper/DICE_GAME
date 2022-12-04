#include "game_board.h"
#include "player.cpp"
#include "input_error_exception.cpp"
#include <iostream>

GameBoard::GameBoard(/* args */)
: m_User(nullptr), m_Computer(nullptr), m_Dice(nullptr), MAX_ROLL(3){
}

GameBoard::~GameBoard(){
}

void GameBoard::init_game(Player* user, Player* computer, Dice* dice){
    m_User = user;
    m_Computer = computer;
    m_Dice = dice;
}

void GameBoard::start_game(){
    int inputButton = 0;

    printf("This is Dice_game. 1:1 Showdown to player and computer.\n");
    printf("press 1 is roll the Dice, press 2 shows the sum of the player and computer's two Dice.\n");
    printf("after rolling a total of 3 Dice, the result is determined by comparing the Dice value.\n\n\n");

    printf("Game Start\n");

    for (int i = 1; i <= MAX_ROLL; i++){
        inputButton = 0;
        printf("please press.\n");
        printf("button 1, button 2.\n");

        try{
            scanf("%d", &inputButton);

            if(inputButton == 1){
                printf("rolling %d\n\n", i);
                rollTheDice();
                continue;
            }
            else if(inputButton == 2){
                showTotalScore();
            }
            else{
                throw InputErrorException();
            }
            i--;
        }
        catch(InputErrorException& e){
            printf("%s\n", e.report().c_str());
            i--;
            while(getchar() != '\n');
            continue;
        }
    }
    win_loss_decision();
}

void GameBoard::rollTheDice(){
    m_User->rollTheDice(m_Dice);
    m_Computer->rollTheDice(m_Dice);
}

void GameBoard::showTotalScore(){
    printf("%s score is %d\n", m_User->getName().c_str(), m_User->getTotalScore());
    printf("%s score is %d\n\n", m_Computer->getName().c_str(), m_Computer->getTotalScore());
}

void GameBoard::win_loss_decision(){
    std::string winner_name = m_User->getTotalScore() <= m_Computer->getTotalScore() ? m_Computer->getName() : m_User->getName();
    
    printf("%s's total score is %d\n", m_User->getName().c_str(), m_User->getTotalScore());
    printf("%s's total score is %d\n", m_Computer->getName().c_str(), m_Computer->getTotalScore());
    
    printf("winner is %s\n", winner_name.c_str());
}
