#ifndef JIPP_FIGURE_H
#define JIPP_FIGURE_H
#include<string>
#include<iostream>
using namespace std;
class Figure{
protected:
    string nazwa;
    string kolor;
public:
    virtual double getArea() = 0;
};

class Circle : public Figure {
protected:
    double r;
public:
    void pole();
    void obwod();
    Circle(int r);
    double getArea();
};

class Rectangle  : public Figure {
protected:
    int x, y;
public:
    Rectangle (int a, int b);
    void pole();
    void obwod();
    double getArea();
};

#endif //JIPP_FIGURE_H
