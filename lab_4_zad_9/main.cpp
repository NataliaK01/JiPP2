#include<iostream>
#include<cmath>
using namespace std;

class Punkt
{
public:
    double x, y;
    Punkt(double px=0, double py=0)
    {
        x = px;
        y = py;
    }
};

double odlegosc(double x, double y, double x2, double y2)
{
    cout<<"Odlegosc miedzy punktami = "<<sqrt(pow(x2-x, 2)+pow(y2-y, 2))<<endl;
    return 0;
}
int main(){

    Punkt p1(1,2);
    Punkt p2(2.3, 4);

    odlegosc(p1.x, p1.y, p2.x, p2.y);
    return 0;
}