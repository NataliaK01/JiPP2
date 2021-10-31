#include "../include/lib.h"
#include<iostream>
using namespace std;

void problems_exponent(int &exponent){

    cin >> exponent;
    if(cin.fail()){
        cout << "Wprowadzone znaki sa niepoprawne"<<endl;
        exit(-1);
    }
}

void problems_skalar(int &scalar){

    cin >> scalar;
    if(cin.fail()){
        cout << "Wprowadzone znaki sa niepoprawne"<<endl;
        exit(-1);
    }
}
void problems_skalar(double &scalar){

    cin >> scalar;
    if(cin.fail()){
        cout << "Wprowadzone znaki sa niepoprawne"<<endl;
        exit(-1);
    }
}
void problems_swap_a(int &a){

    cin >> a;
    if(cin.fail()){
        cout << "Wprowadzone znaki sa niepoprawne"<<endl;
        exit(-1);
    }
}

void problems_swap_b(int &b){

    cin >> b;
    if(cin.fail()){
        cout << "Wprowadzone znaki sa niepoprawne"<<endl;
        exit(-1);
    }
}

void problems_swap_a(double &a){

    cin >> a;
    if(cin.fail()){
        cout << "Wprowadzone znaki sa niepoprawne"<<endl;
        exit(-1);
    }
}

void problems_swap_b(double &b){

    cin >> b;
    if(cin.fail()){
        cout << "Wprowadzone znaki sa niepoprawne"<<endl;
        exit(-1);
    }
}

void problems_tab(int *tab, int columns){

    for(int i = 0; i < columns; i++){
        cin >> tab[i];
        if(cin.fail()){
            cout << "Wprowadzone znaki sa niepoprawne"<<endl;
            exit(-1);
        }
    }
}

void problems_tab(double *tab, int columns){

    for(int i = 0; i < columns; i++){
        cin >> tab[i];
        if(cin.fail()){
            cout << "Wprowadzone znaki sa niepoprawne"<<endl;
            exit(-1);
        }
    }
}

void problems_matrix(int **matrix, int rows, int columns){

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin >> matrix[i][j];
            if(cin.fail()){
                cout << "Wprowadzone znaki sa niepoprawne"<<endl;
                exit(-1);
            }
        }
    }
}

void problems_matrix(double **matrix, int rows, int columns){

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin >> matrix[i][j];
            if(cin.fail()){
                cout << "Wprowadzone znaki sa niepoprawne"<<endl;
                exit(-1);
            }
        }
    }
}