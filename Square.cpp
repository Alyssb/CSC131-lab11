//
// Created by ajs41 on 4/24/2018.
//

#include "Square.h"

Square::Square(int s)
{
    setSide(s);
}

void Square::setSide(const int& s)
{
    if (s > 0) {
        side = s;
    } else {
        side = 10;
    }
}

int Square::area() const
{
    return side * side;
}
