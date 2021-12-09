#include "../include/Vector.h"
#include <cmath>
#include <iostream>
using namespace std;

Vector::Vector() {
    this->x=0;
    this->y=0;
};

Vector::Vector(double x, double y) : x(x), y(y) {}

void Vector::print(){
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

double Vector::length() {
    return sqrt(x * x + y * y);
}


Vector Vector::operator+(const Vector &rhs) const {
    return {x + rhs.x, y + rhs.y};
}

Vector Vector::operator-(const Vector &rhs) const {
    return {x - rhs.x, y - rhs.y};
}

Vector Vector::operator*(const int scalar){
    return {this->x * scalar, this->y * scalar};
}

Vector operator*(const double &lhs, const Vector &rhs) {
    return { lhs * rhs.x, lhs * rhs.y};
}

Vector Vector::operator/(const int scalar){
    return {this->x / scalar, this->y / scalar};
}

bool Vector::operator==(const Vector &rhs) const {
    return (this->x == rhs.x && this->y == rhs.y);
}

Vector &Vector::operator!=(const Vector &rhs) {
    this->x = -rhs.x;
    this->y = -rhs.y;
    return *this;
}

Vector &Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

ostream &operator<<(ostream &lhs, const Vector &rhs) {
    lhs << "X: " << rhs.x << " Y: " << rhs.y;
    return lhs;
}