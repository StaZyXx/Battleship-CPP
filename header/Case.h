#ifndef BATTLESHIP_CASE_H
#define BATTLESHIP_CASE_H

#include "Ship.h"

class Case {
private:
    char display;
    Ship* ship;
public:
    char getChar();
    void setChar(char c);
    Ship *getShip() const;

    void setShip(Ship *pShip);

    Case();
};

#endif //BATTLESHIP_CASE_H