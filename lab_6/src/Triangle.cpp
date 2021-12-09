#include "../include/Triangle.h"
#include "../include/Node.h"

#include<iostream>

using namespace std;
Triangle::Triangle(Node a, Node b, Node c, const string &name) : a(a), b(b), c(c), TriangleName(TriangleName) {}

void Triangle::display(){
    cout << "A: "<< a;
    cout << " B: "; b.display();
    cout << " C: "; c.display();
}

ostream &operator<<(ostream &lhs, Triangle &rhs){
    lhs << "A: " << rhs.a << " B: " << rhs.b << " C: " << rhs.c;
    return lhs;
}

double Triangle::distance(int firstPointIndex, int secondPointIndex) {
    if (firstPointIndex == 0 && secondPointIndex == 1) {
        return pointsDistance(this->a, this->b);
    }
    if (firstPointIndex == 1 && secondPointIndex == 0) {
        return pointsDistance(this->b, this->a);
    }
    else if (firstPointIndex == 0 && secondPointIndex == 2) {
        return pointsDistance(this->a, this->c);
    }
    if (firstPointIndex == 2 && secondPointIndex == 0) {
        return pointsDistance(this->c, this->a);
    }
    else if (firstPointIndex == 1 && secondPointIndex == 2) {
        return pointsDistance(this->b, this->c);
    }
    else if (firstPointIndex == 2 && secondPointIndex == 1) {
        return pointsDistance(this->c, this->b);
    }
    else return 0;
}

void showTriangleData(Triangle triangle) {
    triangle.display();
}

void showTriangleData(Triangle &triangle) {
    triangle.display();
}

void showTriangleData(Triangle *triangle) {
    triangle->display();
}