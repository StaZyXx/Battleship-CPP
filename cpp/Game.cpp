#include "../header/Game.h"

void Game::start() {
    Player p1 = Player();
    Player p2 = Player();

    this->setPlayer1(p1);
    this->setPlayer2(p2);

    p1.placeShips();
    p2.placeShips();

    while (!p1.isAllShipsSunk() && !p2.isAllShipsSunk()) {
        playTurn(p1, p2);
        playTurn(p2, p1);
    }
}

void Game::playTurn(Player &currentPlayer, Player &opponent) {
    currentPlayer.displayShotsBoard();
}

void Game::localOneVsOneMode() {

}

const Player &Game::getPlayer1() const {
    return player1;
}

void Game::setPlayer1(const Player &player1) {
    Game::player1 = player1;
}

const Player &Game::getPlayer2() const {
    return player2;
}

void Game::setPlayer2(const Player &player2) {
    Game::player2 = player2;
}
