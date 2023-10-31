#ifndef BATTLESHIP_SHIP_H
#define BATTLESHIP_SHIP_H

#include <iostream>

#include <vector>

using namespace std;

class Ship {
private:
    char type;
    int size;
    int hitCount = 0;

public:
    char getType() const;

    void setType(char type);

    int getSize();

    int getHitCount() const;

    void incrementHitCount();

    Ship(char type, int size);
};


#endif //BATTLESHIP_SHIP_H
