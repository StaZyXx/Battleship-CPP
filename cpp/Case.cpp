#include "../header/Case.h"

Case::Case() {

}

char Case::getChar() {
    return this->display;
}

void Case::setChar(char c) {
    this->display = c;
}

Ship *Case::getShip() const {
    return ship;
}

void Case::setShip(Ship *pShip) {
    this->ship = pShip;
}
