#include "../header/Game.h"

void Game::start() {

    player1.placeShips();
    player2.placeShips();

    while (!player1.isAllShipsSunk() && !player2.isAllShipsSunk()) {
        playTurn(player1, player2);
        playTurn(player2, player1);
    }
}

void Game::playTurn(Player &currentPlayer, Player &opponent) {
    cout << "It's " << currentPlayer.getPlayerName() << "'s turn." << endl;
    currentPlayer.displayBoard();
    cout << "Your shots:" << endl;
    currentPlayer.displayShotsBoard();
    cout << "Enter a coordinate to shoot at: ";
    int x, y;
    cin >> x >> y;
    if (opponent.ownBoard[x][y].getChar() != '.') {
        cout << "count:" << opponent.ownBoard[x][y].getShip()->getHitCount() << " size:"<< opponent.ownBoard[x][y].getShip()->getSize()<< endl;
        opponent.ownBoard[x][y].getShip()->incrementHitCount();
        opponent.ownBoard[x][y].setChar('X');
        currentPlayer.shotsBoard[x][y] = 'X';
        if (opponent.ownBoard[x][y].getShip()->getHitCount() == opponent.ownBoard[x][y].getShip()->getSize()) {
            cout << "You sunk a ship!" << endl;
        }
        cout << "You hit a ship!" << endl;
    } else {
        opponent.ownBoard[x][y].setChar('O');
        currentPlayer.shotsBoard[x][y] = 'O';
        cout << "You missed!" << endl;
    }

}

void Game::localOneVsOneMode() {

}

Game::Game() {
}
