#ifndef JIPP_VECTOR_H
#define JIPP_VECTOR_H
#include <iostream>
using namespace std;
class Vector {
private:
    double x, y;

public:
    Vector();
    Vector(double x, double y) ;
    double length();
    void print();
    Vector operator+(const Vector &rhs) const;
    Vector operator-(const Vector &rhs) const;
    Vector operator*(const int scalar);
    friend Vector operator*(const double &lhs, const Vector &rhs);
    Vector operator/(const int scalar);
    bool operator==(const Vector &rhs) const;
    Vector &operator!=(const Vector &rhs);
    Vector &operator+=(const Vector &rhs);
    friend ostream &operator<<(ostream &lhs, ostream &rhs);
};

Vector operator*(const double &lhs, const Vector &rhs);
ostream &operator<<(ostream &lhs, ostream &rhs);
#endif //JIPP_VECTOR_H
