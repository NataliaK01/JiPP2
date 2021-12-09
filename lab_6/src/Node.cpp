#include "../include/Node.h"
#include <iostream>
#include<math.h>
void Node::values(double x, double y)
{
    this->x=x;
    this->y=y;
}
double pointsDistance(Node a, Node b){
    return sqrt(pow((b.x-a.x), 2)+pow((b.y-a.y), 2));
}