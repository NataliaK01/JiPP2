#include<iostream>
#include<cmath>

using namespace std;

class Kula
{
private:
    double r;

public:
    void set_promien(double promien){
        r = promien;
    }
    double get_objetosc_kuli(double r){
        return (4*M_PI*r*r*r)/3;
    }
};

int main(){

    Kula objetosc;
    double promien;
    cout<<"Podaj promien kuli: ";
    cin>>promien;
    objetosc.set_promien(promien);
    cout<<endl;
    cout<<objetosc.get_objetosc_kuli(promien);

    return 0;
}

