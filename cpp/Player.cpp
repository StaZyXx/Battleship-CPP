#include "../header/Player.h"


Player::Player() {
    ships[0] = Ship('A', 5);
    ships[1] = Ship('B', 4);
    ships[2] = Ship('C', 3);
    ships[3] = Ship('S', 3);
    ships[4] = Ship('D', 2);
}

void Player::placeShips() {
    for (int i = 0; i < 5; i++) {
        int x, y;
        char orientation;
        cout << "Enter the coordinates of the ship " << i + 1 << " (size: " << ships[i].getSize() << "): ";
        cin >> x >> y;
        cout << "Enter the orientation of the ship " << i + 1 << " (h for horizontal, v for vertical): ";
        cin >> orientation;

        if (orientation == 'h') {
            for (int j = 0; j < ships[i].getSize(); j++) {
                ownBoard[x][y + j].setShip(&ships[i]);
                ownBoard[x][y + j].setChar(ships[i].getType());
            }
        } else if (orientation == 'v') {
            for (int j = 0; j < ships[i].getSize(); j++) {
                ownBoard[x + j][y].setShip(&ships[i]);
                ownBoard[x + j][y].setChar(ships[i].getType());
            }
        } else {
            cout << "Invalid orientation" << endl;
            i--;
        }

    }
}

bool Player::isAllShipsSunk() {
    for (Ship item: ships) {
        if (item.getHitCount() != item.getSize()) {
            return false;
        }
    }
    return true;
}

void Player::displayBoard() {
    for (const auto &item: ownBoard) {
        for (Case item2: item) {
            cout << item2.getChar() << " ";
        }
        cout << endl;
    }
}

void Player::displayShotsBoard() {
    for (const auto &item: shotsBoard) {
        for (const auto &item2: item) {
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
