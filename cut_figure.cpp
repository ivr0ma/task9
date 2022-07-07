#include "cut_figure.h"
#include <iostream>
using namespace std;

cut_figure::cut_figure(double S1 = 0, double S2 = 0) : circle(0), rectangle(0, 0) {
    this->S1 = S1;
    this->S2 = S2;
}

cut_figure::cut_figure(circle A, rectangle B) : circle(0), rectangle(0, 0) {
    this->S1 = A.area();
    this->S2 = B.area();
}

cut_figure::cut_figure(rectangle A, circle B) : circle(0), rectangle(0, 0) {
    this->S1 = A.area();
    this->S2 = B.area();
}

void cut_figure::print() {
    cout << "S1:" << this->S1 << "S2:" << this->S2 << endl;
}

double cut_figure::area() {
    if (S1 >= S2) {
        return S1 - S2;
    }
    else {
        return S2 - S1;
    }
}