#ifndef BATTLESHIP_SHIP_H
#define BATTLESHIP_SHIP_H

#include <iostream>

using namespace std;

class Ship {
private:
    char type;
    int size;
    int hitCount;
    Ship(char type, int size);

public:
    int getSizeLength() const;

    int getSizeWidth() const;

    void setSizeLength(int sizeLength);

    void setSizeWidth(int sizeWidth);
};


#endif //BATTLESHIP_SHIP_H
