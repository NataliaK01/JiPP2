#include <iostream>
#include <cstdlib>
using namespace std;

void srednia(double *x, double *y)
{
    cout<<"srednia = "<<((*x)+(*y))/2<<endl;
}

int main()
{
    double a, b;
    cout<<"Podaj dwie liczby: ";
    cin>>a>>b;
    srednia(&a, &b);
    return 0;
}
