#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "cut_figure.h"
#define N 2
using namespace std;

int main() {
    shape * p[N];
    shape * t;
    double total_area = 0;

    rectangle a(2, 3);
    circle b(3);
    cut_figure c(a, b);

    cout << "CutS=" << c.area() << endl;
    cout << "Sa:" << a.area() << " Sb:" << b.area() << endl;

    p[0] = &a;
    p[1] = &b;

    //cout << "Sa2:" << p[0]->area() << " Sb2:" << p[1]->area() << endl;

    for (int i=0; i<N; i++) {
        total_area += p[i]->area();
    }

    cout << "total_area=" << total_area << endl;
    return 0;
}
