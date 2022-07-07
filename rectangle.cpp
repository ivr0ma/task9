#include "rectangle.h"
#include <iostream>
using namespace std;

rectangle::rectangle(double height = 0, double width = 0) {
    this->height = height;
    this->width = width;
}
void rectangle::print() {
    cout << "h:" << this->height << " w:" << this->width << endl;
}
double rectangle::area() {
    return height*width;
}