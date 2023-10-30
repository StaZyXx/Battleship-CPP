#include "../header/Player.h"


Player::Player() = default;

void Player::placeShips() {
    for (int i = 0; i < 5; i++){
        int x, y;
        char orientation;
        cout << "Enter the coordinates of the ship " << i + 1 << " (length: " << ships[i].getLength() << ", width: " << ships[i].getWidth() << "): ";
        cin >> x >> y;
        cout << "Enter the orientation of the ship " << i + 1 << " (h for horizontal, v for vertical): ";
        cin >> orientation;
        if (orientation == 'h'){
            // Check if the ship is out of bounds
            if (y + ships[i].getLength() > 10){
                cout << "The ship is out of bounds, please try again." << endl;
                i--;
                continue;
            }

            for (int j = 0; j < ships[i].getLength(); j++){
                ownBoard[x][y + j].setShip(&ships[i]);
                ownBoard[x][y + j].setChar(ships[i].getType());
            }
        } else if (orientation == 'v'){
            // Check if the ship is out of bounds
            if (x + ships[i].getWidth() > 10){
                cout << "The ship is out of bounds, please try again." << endl;
                i--;
                continue;
            }

            for (int j = 0; j < ships[i].getWidth(); j++){
                ownBoard[x + j][y].setShip(&ships[i]);
                ownBoard[x + j][y].setChar(ships[i].getType());
            }
        }
    }
}

bool Player::isAllShipsSunk() {
    for (Ship item: ships){
        if (item.getHitCount() != item.getSize()){
            return false;
        }
    }
    return true;
}

void Player::displayBoard() {
    for (const auto &item: ownBoard){
        for (Case item2: item){
            cout << item2.getChar() << " ";
        }
        cout << endl;
    }
}

void Player::displayShotsBoard() {
    for (const auto &item: shotsBoard){
        for (const auto &item2: item){
            cout << item2 << " ";
        }
        cout << endl;
    }
}

void Player::setPlayerName(string n) {
    this->playerName = n;
}

string Player::getPlayerName() {
    return this->playerName;
}
