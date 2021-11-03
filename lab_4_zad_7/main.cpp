#include<iostream>
#include<cmath>

using namespace std;

class FunkcjaKwadratowa
{
public:
    double a;
    double b;
    double c;
};
void funkcja(double x, double y, double z){

    cout<<"f(x) = "<<x<<"x^2 + "<<y<<"x + "<<z<<endl;
}
int main(){

    FunkcjaKwadratowa wspolczynnik;

    cout<<"Podaj kolejne wspolczynniki funkcji kwadratowej: "<<endl;
    cin>>wspolczynnik.a;
    cin>>wspolczynnik.b;
    cin>>wspolczynnik.c;

    cout<<endl;
    funkcja(wspolczynnik.a, wspolczynnik.b, wspolczynnik.c);

    return 0;
}