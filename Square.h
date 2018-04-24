//
// Created by ajs41 on 4/24/2018.
//

#ifndef LAB11_SQUARE_H
#define LAB11_SQUARE_H

class Square {
public:
    explicit Square(int s = 1);
    void setSide(const int & s);
    int area() const;

private:
    int side;
};

#endif //LAB11_SQUARE_H
