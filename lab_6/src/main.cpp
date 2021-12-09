#include<iostream>
#include"../include/Node.h"
#include"../include/przeciazenia_operatorow.h"
#include"../include/przeciazenia_operatorow_cd.h"


using namespace std;

int main(){
    cout<<"----------ZADANIE 1----------"<<endl;
    Node a, b;
    a.values(20, 3);
    b.values(19, 2);
    cout<<"Odleglosc dwoch punktow: "<<pointsDistance(a,b);
    return 0;
    cout<<endl;
//    cout<<"----------ZADANIE 2----------"<<endl;
//    Vector x(1, 5);
//    Vector y(1, 5);
//    Vector z = x * 5;
//    Vector zz = 5 * x;
//    z.print();      // Wynik : x:5, y:25
//    zz.print();     // Wynik : x:5, y:25
//    cout << z << endl;
//
//    Node c(1, 16);
//    Triangle t(a, b, c, "first");
//    t.display(); cout << endl;
//    cout << t << endl;
//    showTriangleData(t);    cout << endl;
//    showTriangleData(&t);      cout << endl;
//
//    cout << "distance: " << t.distance(0,1) << endl;
//
//    cout<<"----------ZADANIE 3----------"<<endl;

    return 0;
}
