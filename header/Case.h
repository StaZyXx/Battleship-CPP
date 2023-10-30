#ifndef BATTLESHIP_CASE_H
#define BATTLESHIP_CASE_H

#include "Ship.h"

class Case {
private:
    char display;
    Ship* ship;
    Case();
};

#endif //BATTLESHIP_CASE_H