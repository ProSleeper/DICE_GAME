#ifndef __GAMEBOARD_H
#define __GAMEBOARD_H

class Player;
class Dice;

class GameBoard{
private:
    Player* m_User;
    Player* m_Computer;
    Dice* m_Dice;
    const int MAX_ROLL;
    
    void rollTheDice();
    void showTotalScore();
    void win_loss_decision();

public:
    GameBoard(/* args */);
    ~GameBoard();
    void init_game(Player* user, Player* computer, Dice* dice);
    void start_game();
};

#endif

