#include <cstdlib>
#include <iostream>
using namespace std;

void wieksze_od_zera(int *t, int w)
{
    for(int i=0; i < w; i++) {
    if(t[i]>0){
        cout<<t[i]<<" ";
    }
    }
}
int main(){

    int w;
    cout<<"Podaj wielkosc tablicy: ";
    cin>>w;
    int *(tab) = new int[w];
    cout<<"Podaj elementy tablicy: ";
    for(int i = 0; i<w; i++){
        cin>>tab[i];
    }
    cout<<"Tablica z wylosowanymi elementami:"<<endl;
    for(int j=0; j<w; j++){
        cout<<tab[j]<<" ";
    }
    cout<<endl;
    cout<<"Tablica z elementami wiekszymi od zera:"<<endl;
    wieksze_od_zera(tab, w);
    delete [] tab;
    return 0;
}

