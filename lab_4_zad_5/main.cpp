#include<iostream>

using namespace std;

class Prostopadloscian
{
public:
    double a;
    double b;
    double c;
};
double pole(int x, int y, int z){
 return 2*(x*y+x*z+y*z);
}
int main(){

    Prostopadloscian p1;
    p1.a=1;
    p1.b=2;
    p1.c=3;

    cout<< pole(p1.a,p1.b,p1.c);

    return 0;
}

