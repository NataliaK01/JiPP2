#include <iostream>
#include<time.h>
using namespace std;

void change(int tab[])
{

    cout<<"Pierwsza tablica:"<<endl;
    for(int i = 0; i < 100; i++)
    {
        cout<<tab[i]<<" ";
    }
        for(int i = 0; i < 50; i++)
    {
        swap( tab[i], tab[99-i]);
    }
    cout<<endl;
    cout<<"Zmieniona tablica:"<<endl;

    for(int i = 0; i < 100; i++)
    {
        cout<<tab[i]<<" ";
    }
}

int main() {
    int tab[100];
    srand(time(NULL));
    for(int i = 0; i<100; i++){
        tab[i] = (rand() % 99) + 1;
    }
    change(tab);
    return 0;
}