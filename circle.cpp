#include "circle.h"
#include <iostream>
using namespace std;

circle::circle(double radius = 0) {
    this->radius = radius;
}
void circle::print() {
    cout << "r:" << this->radius << endl;
}
double circle::area() {
    return 3.14*radius*radius;
}