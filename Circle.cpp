//
// Created by ajs41 on 4/24/2018.
//

#include <cmath>
#include "Circle.h"

Circle::Circle(double r)
{
    setRadius(r);
}


void Circle::setRadius(const double& r)
{
    if (r > 0) {
        radius = r;
    } else {
        radius = 1;
    }
}

double Circle::area() const
{
    return M_PI * radius * radius;
}