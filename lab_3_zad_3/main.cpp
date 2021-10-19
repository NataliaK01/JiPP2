#include <iostream>
#include<stdlib.h>
#include <time.h>
using namespace std;
int max(int *t){
    int m = t[0];
    for(int i = 0; i < 100; i++){
        if(m < t[i])
        {
            m = t[i];
        }
    }
    return m;
}
int main(){
    srand(time(NULL));
    int * tab = new int[100];
    for(int i = 0; i<100; i++){
        tab[i] = (rand() % 99) + 1;
    }
    cout<<max(tab);
    delete [] tab;
    return 0;
}
