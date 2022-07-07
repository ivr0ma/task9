#ifndef TASK3_CIRCLE_H
#define TASK3_CIRCLE_H

#include "shape.h"

class circle: virtual public shape {
    double radius;
public:
    circle(double ) ;
    void print() ;
    double area() ;
};

#endif //TASK3_CIRCLE_H
