#ifndef BATTLESHIP_SHIP_H
#define BATTLESHIP_SHIP_H

#include <iostream>

#include <vector>

using namespace std;

class Ship {
private:
    char type;
    int length, width;
    int hitCount;
    Ship(char type, int length, int width);

public:
    char getType() const;

    void setType(char type);

    int getLength() const;

    void setLength(int length);

    int getWidth() const;

    void setWidth(int width);

    int getSize();

    int getHitCount() const;

    void incrementHitCount();
};


#endif //BATTLESHIP_SHIP_H
