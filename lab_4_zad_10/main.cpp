#include<iostream>
using namespace std;
class Punkt{
public:
    double x;
    double y;
    Punkt(double x, double y);
};
class Figura{
public:
    int liczba_wierzcholkow;
    Punkt* wierzcholki;
    Figura(int liczba_wierzcholkow, Punkt* wierzcholki);
};

Punkt::Punkt(double x, double y)
    :x(x)
    ,y(y)
{
}
Figura::Figura(int liczba_wierzcholkow, Punkt *wierzcholki) : liczba_wierzcholkow(liczba_wierzcholkow), wierzcholki(wierzcholki)
{
    for(int i = 0; i < liczba_wierzcholkow; i++)
    {
        cout<<"\nWierzcholek "<<i<<"\tx: "<<wierzcholki[i].x<<", y: "<<wierzcholki[i].y;
    }
}
int main(){
    Punkt p1(1.3, 4);
    Punkt p2(1, 3);
    Punkt tabPunkt[] = {p1, p2};
    Figura figura(2, tabPunkt);
    return 0;
}