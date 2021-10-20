#include <cstdlib>
#include <iostream>
using namespace std;

void sortowanie(int *t, int w)
{
    int pom, x;
    for(int i=1; i < w; i++) {
        pom = t[i];
        x = i - 1;
        while(x>=0 && t[x]>pom)
        {
            t[x+1] = t[x];
            --x;
        }
        t[x+1] = pom;
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
    cout<<"Tablica przed sortowaniem:"<<endl;
    for(int j=0; j<w; j++){
        cout<<tab[j]<<" ";
    }
    cout<<endl;
    cout<<"Tablica po sortowaniu:"<<endl;
    sortowanie(tab, w);
    for(int k=0; k<w; k++){
        cout<<tab[k]<<" ";
    }
    delete [] tab;
    return 0;
}

