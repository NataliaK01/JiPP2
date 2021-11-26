#include "../include/Figure.h"
#include <iostream>
using namespace  std;

Rectangle ::Rectangle (int a, int b) : x(a), y(b) {}
double Rectangle::getArea() {
    return x*x;
};

void Rectangle ::pole() {
    cout<<"Pole: "<<x*x<<endl;
}

void Rectangle ::obwod() {
    cout<<"Obwod: "<<4*x<<endl;
}

Circle::Circle (int r) : r(r) {}

double Circle::getArea() {
    return 3.14*r*r;
};

void Circle::pole() {
    cout<<"Pole: "<<(3.14*r*r)<<endl;
}

void Circle::obwod() {
    cout<<"Obwod: "<<(2*3.14*r)<<endl;
}

