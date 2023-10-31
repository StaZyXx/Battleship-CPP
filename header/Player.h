#ifndef BATTLESHIP_PLAYER_H
#define BATTLESHIP_PLAYER_H
#include <iostream>
#include <vector>
#include "Ship.h"
#include "Case.h"

using namespace std;
class Player {
private:
    string playerName;
public:
    explicit Player(string playerName);
    void placeShips();
    bool isAllShipsSunk();
    void displayBoard();
    void displayShotsBoard();
    vector<vector<Case>> ownBoard;
    vector<vector<char>> shotsBoard;
    vector<Ship> ships;
    void setPlayerName(string n);
    string getPlayerName();
};
#endif //BATTLESHIP_PLAYER_H