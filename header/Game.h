#ifndef BATTLESHIP_GAME_H
#define BATTLESHIP_GAME_H
#include "Player.h"
#include <iostream>
#include <vector>
using namespace std;

class Game {
private:
    Player player1;
    Player player2;
public:
    void start();
    void playTurn(Player& currentPlayer, Player& opponent);
    void localOneVsOneMode();

    const Player &getPlayer1() const;

    void setPlayer1(const Player &player1);

    const Player &getPlayer2() const;

    void setPlayer2(const Player &player2);
};


#endif //BATTLESHIP_GAME_H
