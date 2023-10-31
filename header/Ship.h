#ifndef BATTLESHIP_SHIP_H
#define BATTLESHIP_SHIP_H

#include <iostream>

#include <vector>

using namespace std;

class Ship {
private:
    char type;
    int size;
    int hitCount;
public:
    Ship(char type, int size);

public:
    char getType() const;

    void setType(char type);

    int getSize();

    int getHitCount() const;

    void incrementHitCount();
};


#endif //BATTLESHIP_SHIP_H
