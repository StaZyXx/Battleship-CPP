#ifndef BATTLESHIP_SHIP_H
#define BATTLESHIP_SHIP_H

#include <iostream>

using namespace std;

class Ship {
private:
    int sizeLength;
    int sizeWidth;
public:
    int getSizeLength() const;

    int getSizeWidth() const;

    void setSizeLength(int sizeLength);

    void setSizeWidth(int sizeWidth);
};


#endif //BATTLESHIP_SHIP_H
