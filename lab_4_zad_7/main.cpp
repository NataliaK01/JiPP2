#include<iostream>
#include<cmath>

using namespace std;

class FunkcjaKwadratowa
{
private:
    double a;
    double b;
    double c;

public:
    void get_a_b_c(double a, double b, double c){
        this-> a = a;
        this-> b = b;
        this-> c = c;
    }

    void get_funkcja(double x, double y, double z){
        cout<<"f(x) = "<<x<<"x^2 + "<<y<<"x + "<<z<<endl;
    }
};
int main(){

    FunkcjaKwadratowa wspolczynnik;
    double x, y, z;
    cout<<"Podaj kolejne wspolczynniki funkcji kwadratowej: "<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    wspolczynnik.get_a_b_c(x, y, z);
    cout<<endl;
    wspolczynnik.get_funkcja(x, y, z);

    return 0;
}