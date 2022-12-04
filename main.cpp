#include "game_board.cpp"
#include "user.cpp"
#include "computer.cpp"
#include "dice.cpp"

int main(int argc, char *argv[]){

    GameBoard board;

    std::string sUserName = "User";
    std::string sComputerName = "Computer";

    User user(sUserName);
    Computer computer(sComputerName);
    Dice dice;

    board.init_game(&user, &computer, &dice);
    board.start_game();

    return 0;
}
