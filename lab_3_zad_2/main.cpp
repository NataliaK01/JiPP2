#include<iostream>
#include<time.h>
using namespace std;

int random(int a, int b){
    return ((rand() % b ) + a);
}
int main(){
    srand(time(NULL));
    cout<<"Wylodowana liczba: "<<random(1, 10)<<endl;
    return 0;
}