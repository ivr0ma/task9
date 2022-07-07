#ifndef UNTITLED2_CUT_FIGURE_H
#define UNTITLED2_CUT_FIGURE_H

#include "circle.h"
#include "rectangle.h"

class cut_figure: virtual public circle, virtual public rectangle {
    double S1, S2;
public:
    cut_figure(double , double ) ;
    cut_figure(circle , rectangle ) ;
    cut_figure(rectangle , circle ) ;
    void print() ;
    double area() ;
};

#endif //UNTITLED2_CUT_FIGURE_H