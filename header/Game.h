#ifndef BATTLESHIP_GAME_H
#define BATTLESHIP_GAME_H
#include "Player.h"
#include <iostream>
#include <vector>
using namespace std;

class Game {
private:
    Player player1 = Player("Player 1");
    Player player2 = Player("Player 2");
public:
    Game();
    void start();
    void playTurn(Player& currentPlayer, Player& opponent);
    void localOneVsOneMode();
};


#endif //BATTLESHIP_GAME_H
