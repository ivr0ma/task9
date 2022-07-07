#ifndef TASK3_RECTANGLE_H
#define TASK3_RECTANGLE_H

#include "shape.h"

class rectangle: virtual public shape {
    double height, width;
public:
    rectangle(double , double ) ;
    void print() ;
    double area() ;
};

#endif //TASK3_RECTANGLE_H