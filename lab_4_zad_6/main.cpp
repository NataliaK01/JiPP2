#include<iostream>
#include<cmath>

using namespace std;

class Kula
{
public:
    double r;
};
double objetosc_kuli(double r){
    return (4*M_PI*r*r*r)/3;
}
int main(){

    Kula objetosc;

    cout<<"Podaj promien kuli: ";
    cin>>objetosc.r;
    cout<<endl;
    cout<<objetosc_kuli(objetosc.r);

    return 0;
}

