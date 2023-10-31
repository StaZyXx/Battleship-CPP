#include "../header/Ship.h"

Ship::Ship(char type, int size) {
    this->type = type;
    this->size = size;
}

char Ship::getType() const {
    return type;
}

int Ship::getSize() {
    return size;
}

int Ship::getHitCount() const {
    return hitCount;
}

void Ship::incrementHitCount() {
    hitCount += 1;
}
