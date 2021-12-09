#ifndef JIPP_NODE_H
#define JIPP_NODE_H

using namespace std;

class Node{
private:
    double x, y;
public:

    friend double pointsDistance(Node a, Node b);
    void values(double x, double y);
};

double pointsDistance(Node a, Node b);

#endif