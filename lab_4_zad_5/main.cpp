#include<iostream>

using namespace std;

class Prostopadloscian
{
private:
    double a;
    double b;
    double c;

public:
    void set_a_b_c(double x, double y, double z){
        a = x;
        b = y;
        c = z;
    }
    double get_a_b_c(double x, double y, double z){
        return 2*(x*y+x*z+y*z);
    }
};
int main(){

    Prostopadloscian pole;
    double x, y, z, wynik;
    cout<<"Podaj a: "<<endl;
    cin>>x;
    cout<<"Podaj b: "<<endl;
    cin>>y;
    cout<<"Podaj c: "<<endl;
    cin>>z;
    pole.set_a_b_c(x, y, z);
    wynik = pole.get_a_b_c(x, y, z);
    cout<<"Pole = "<<wynik<<endl;
    return 0;
}

