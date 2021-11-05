#include<iostream>

using namespace std;

class Destruktor {
public:
    int *x;
    Destruktor();
    ~Destruktor();
    void pause();
};

Destruktor::Destruktor() {
    cout<<"\nKonstruktor zostal wywolany\n";
    x = new int[1024];
}

Destruktor::~Destruktor() {
    delete[] x;
    cout<<"\nDestruktor zostal wywolany\n";
}
void Destruktor::pause()
{
    system ("PAUSE");
}
int main()
{
    Destruktor * destruktor;
    destruktor = new Destruktor;
    destruktor->pause();
    delete destruktor;
    return 0;
}