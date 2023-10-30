#include "../header/Ship.h"

Ship::Ship(char type, int length, int width) {
    this->type = type;
    this->length = length;
    this->width = width;
}

char Ship::getType() const {
    return type;
}

void Ship::setType(char type) {
    Ship::type = type;
}

int Ship::getLength() const {
    return length;
}

void Ship::setLength(int length) {
    Ship::length = length;
}

int Ship::getWidth() const {
    return width;
}

void Ship::setWidth(int width) {
    Ship::width = width;
}

int Ship::getSize() {
    return this->length * this->width;
}

int Ship::getHitCount() const {
    return hitCount;
}

void Ship::incrementHitCount() {
    Ship::hitCount++;
}
