#include <iostream>
#include"../include/calc.h"

using namespace std;

int main(int argc, char *argv[]) {
    if( (string)argv[1] == "add"){
        cout<<"add\n";
        add(atoi(argv[2]), atoi(argv[3]));
    }

    if( (string)argv[1] == "subtract"){
        cout<<"subtract\n";
        subtract(atoi(argv[2]), atoi(argv[3]));
    }

    if( (string)argv[1] == "volume"){
        cout<<"volume\n";
        volume(atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]));
    }

    if((string)argv[1] == "help") {
        help();
        exit(1);
    }
    return 0;
}
