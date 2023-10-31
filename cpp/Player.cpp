#include "../header/Player.h"


Player::Player(string playerName) {
    this->playerName = playerName;
    Ship airCraft('A', 5);
    Ship battleShip('B', 4);
    Ship cruiser('C', 3);
    Ship submarine('S', 3);
    Ship destroyer('D', 2);

    ships.push_back(airCraft);
    ships.push_back(battleShip);
    ships.push_back(cruiser);
    ships.push_back(submarine);
    ships.push_back(destroyer);

    for (int i = 0; i < 10; i++) {
        vector<Case> row;
        for (int j = 0; j < 10; j++) {
            Case c;
            c.setChar('.');
            row.push_back(c);
        }
        ownBoard.push_back(row);
    }

    for (int i = 0; i < 10; i++) {
        vector<char> row;
        for (int j = 0; j < 10; j++) {
            row.push_back('.');
        }
        shotsBoard.push_back(row);
    }
};

void Player::placeShips() {

    // Place default ships

    int i = 0;
    for (Ship item: ships) {
        for (int j = 0; j < item.getSize(); j++) {
            ownBoard[j][i].setShip(&item);
            ownBoard[j][i].setChar(item.getType());
        }
        i++;
    }


    /*for (int i = 0; i < 5; i++) {
        int x, y;
        char orientation;
        cout << "Enter the coordinates of the ship " << i + 1 << " (size: " << ships[i].getSize() << "): ";
        cin >> x >> y;
        cout << "Enter the orientation of the ship " << i + 1 << " (h for horizontal, v for vertical): ";
        cin >> orientation;
        if (orientation == 'h') {
            // Check if already a ship in the way
            for (int j = 0; j < ships[i].getSize(); j++) {
                if (ownBoard[x][y + j].getChar() != '.') {
                    cout << "There is already a ship in the way" << endl;
                    i--;
                    break;
                }
            }

            for (int j = 0; j < ships[i].getSize(); j++) {
                ownBoard[x][y + j].setShip(&ships[i]);
                ownBoard[x][y + j].setChar(ships[i].getType());
            }
        } else if (orientation == 'v') {
            // Check if already a ship in the way
            for (int j = 0; j < ships[i].getSize(); j++) {
                if (ownBoard[x + j][y].getChar() != '.') {
                    cout << "There is already a ship in the way" << endl;
                    i--;
                    break;
                }
            }

            for (int j = 0; j < ships[i].getSize(); j++) {
                ownBoard[x + j][y].setShip(&ships[i]);
                ownBoard[x + j][y].setChar(ships[i].getType());
            }
        } else {
            cout << "Invalid orientation" << endl;
            i--;
        }

        displayBoard();
    }*/
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
