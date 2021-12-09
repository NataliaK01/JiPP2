#include<iostream>
#include"../include/Node.h"
#include"../include/Vector.h"
#include"../include/Triangle.h"


using namespace std;

int main(){
    cout<<"----------ZADANIE 1----------"<<endl;
    Node a, b;
    a.values(20, 3);
    b.values(19, 2);
    cout<<"Odleglosc dwoch punktow: "<<pointsDistance(a,b);
    cout<<endl;
    cout<<"----------ZADANIE 2----------"<<endl;
    Vector x(1, 5);
    Vector y(1, 5);
    Vector z = x * 5;
    Vector zz = 5 * x;
    z.print();
    zz.print();

//
//    Node c(1, 16);
//    Triangle t(a, b, c, "first");
//    t.display(); cout << endl;
//    cout << t << endl;
//    showTriangleData(t);    cout << endl;
//    showTriangleData(&t);      cout << endl;

//    cout << "distance: " << t.distance(0,1) << endl;
//
//    cout<<"----------ZADANIE 3----------"<<endl;
    Node a, b(5,8), c(1, 16);
    Triangle triangle(a, b, c, "First Triangle");

    triangle.display();
    cout << triangle << endl;
    cout << "Distance between first and second point is " << triangle.distance(0,1) << endl;

    return 0;
}
