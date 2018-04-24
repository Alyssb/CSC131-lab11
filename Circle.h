//
// Created by ajs41 on 4/24/2018.
//

#ifndef LAB11_CIRCLE_H
#define LAB11_CIRCLE_H

class Circle {
public:
    explicit Circle(double r = 1);
    void setRadius(const double & r);
    double area{} const;

private:
    double radius;
};

#endif //LAB11_CIRCLE_H