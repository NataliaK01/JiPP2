#include<iostream>
#include"../include/funkcje_zaprzyjaznione.h"
using namespace std;

int main(){
    Node a, b;
    a.wspolczynniki(20, 3);
    b.wspolczynniki(19, 2);
    cout<<"Odleglosc dwoch punktow: "<<pointsDistance(a,b);
    return 0;
}
