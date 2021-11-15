#ifndef JIPP_FUNKCJE_ZAPRZYJAZNIONE_H
#define JIPP_FUNKCJE_ZAPRZYJAZNIONE_H

using namespace std;

class Node{
public:

    friend double pointsDistance(Node a, Node b);
    double x, y;
    void wspolczynniki(double x, double y);
};

double pointsDistance(Node a, Node b);

#endif
