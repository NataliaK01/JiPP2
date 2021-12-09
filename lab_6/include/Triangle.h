#ifndef JIPP_TRIANGLE_H
#define JIPP_TRIANGLE_H
#include "Node.h"
#include <string>
#include <cmath>

class Triangle {
private:
    Node a;
    Node b;
    Node c;
    string TriangleName;
public:
    Triangle(Node a, Node b, Node c, const string &name);

    void display();

    friend ostream &operator<<(ostream &lhr, Triangle &rhs);

    double distance(int firstPointIndex, int secondPointIndex);
};

ostream &operator<<(ostream &lhr, Triangle &rhs);

// Przeciazenie gdy argumentami sa triangle i &triangle nie dziala
// Nalezy wybrac jedna z nich
//void showTriangleData(Triangle triangle);
//
//void showTriangleData(Triangle &triangle);

// Takie przeciazenia dziala
void showTriangleData(Triangle *triangle);

#endif //JIPP_TRIANGLE_H
