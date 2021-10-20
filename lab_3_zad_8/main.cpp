#include <cstdlib>
#include <iostream>
using namespace std;

void function (int x, int* w){
    *w=x;
    cout<<*w;
}
int main(){
    int a=1, b=2;
    function(a, &b);
    return 0;
}
