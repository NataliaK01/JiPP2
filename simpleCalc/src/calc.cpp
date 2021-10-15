#include "../include/calc.h"
#include<iostream>
using namespace std;
void add(int a, int b){
    cout<<a+b;
}
void subtract(int a, int b) {
    cout<<a-b;
}
void volume(int a, int b, int wt, int wg){
    cout<<0.5*(a+b)*wt*wg;
}

void help()
{
    cout<<"Simple calculator"<<endl;
    cout<<"simpleCalc [nazwa dzialania]"<<"\n"<<endl;
    cout<<"Dzialania:"<<endl;
    cout<<"add [a] [b] \n\t Dodawanie dwoch liczb ([a] i [b]) calkowitych."<< endl;
    cout<<"subtract [a] [b] \n\t Odejmowanie dwoch liczb ([a] i [b]) calkowitych."<< endl;
    cout<<"volume [a] [b] \n\t Obliczanie objetosci graniastoslupa prostego o podstawie trapeza, ([a] i [b]) - podstawy trapeza, [wt] - wysokosc trapeza, [wg] - wysokosc graniastoslupa"<< endl;

}

