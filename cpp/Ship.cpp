#include "../header/Ship.h"

int Ship::getSizeLength() const {
    return sizeLength;
}

int Ship::getSizeWidth() const {
    return sizeWidth;
}

void Ship::setSizeLength(int sizeLength) {
    this->sizeLength = sizeLength;
}

void Ship::setSizeWidth(int sizeWidth) {
    this->sizeWidth = sizeWidth;
}
