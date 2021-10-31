#include<iostream>
#include<library.h>
#include<string.h>
#include "../include/lib.h"

using namespace std;

int main(int argc, char *argv[]){

    //deklaruje potrzebne zmienne
    int rows, columns, columns_2, skalar_i, exponent, a_i, b_i, result_i;
    double skalar_d, a_d, b_d, result_d;
    string type;
    //wywoluje funkcje help() na poczatku programu
    help();
    //jesli uzytkownik wybierze "addMatrix" - dodawanie macierzy, wowczas wykonuje sie warunek if
    if((string)argv[1] == "addMatrix") {

        cout<<"Podaj liczbe wierszy i kolumn oraz wpisz macierz a i macierz b."<<endl;
        cout << "Podaj liczbe wierszy: " << endl;
        cin>>rows;
        cout << "Podaj liczbe kolumn: " << endl;
        cin>>columns;
        cout<<"Jaki typ liczb chcesz wpisac do macierzy? (int czy double)"<<endl;
        cin>>type;
        if(type == "int") {

            //tworze i alokuje pamiec dla macierzy a
            int **matrix_a = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new int[columns];

            //tworze i alokuje pamiec dla macierzy b
            int **matrix_b = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_b[k] = new int[columns];

            cout << "Podaj pierwsza macierz: " << endl;
                problems_matrix(matrix_a, rows, columns);

            cout << "Podaj druga macierz: " << endl;
            problems_matrix(matrix_b, rows, columns);

            //wyswietlam macierz a
            cout<<"Macierz a: "<<endl;

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                cout<<matrix_a[i][j]<<" ";
                }
                cout<<endl;
            }

            //wyswietlam macierz b
            cout<<"Macierz b: "<<endl;

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    cout<<matrix_b[i][j]<<" ";
                }
                cout<<endl;
            }

            //tworze i alokuje pamiec macierzy wynikowej
            int **matrix_score = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_score[k] = new int[columns];

            //wywoluje funkcje
            matrix_score = addMatrix(matrix_a, matrix_b, rows, columns);

            cout<<"Suma = "<<endl;
            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    cout<<matrix_score[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else if(type == "double"){

            //tworze i alokuje pamiec dla macierzy a
            double **matrix_a = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new double[columns];

            //tworze i alokuje pamiec dla macierzy b
            double **matrix_b = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_b[k] = new double[columns];

            cout << "Podaj pierwsza macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            cout << "Podaj druga macierz: " << endl;
            problems_matrix(matrix_b, rows, columns);

            //wyswietlam macierz a
            cout<<"Macierz a: "<<endl;

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    cout<<matrix_a[i][j]<<" ";
                }
                cout<<endl;
            }

            //wyswietlam macierz b
            cout<<"Macierz b: "<<endl;

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    cout<<matrix_b[i][j]<<" ";
                }
                cout<<endl;
            }

            //tworze i alokuje pamiec macierzy wynikowej
            double **matrix_score = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_score[k] = new double[columns];

            //wywoluje funkcje
            matrix_score = addMatrix(matrix_a, matrix_b, rows, columns);

            //wyswietlam wynik
            cout<<"Suma = "<<endl;
            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    cout<<matrix_score[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    if((string)argv[1] == "subtractMatrix") {

        //uzytkownik wczytuje potrzebne dane
        cout << "Podaj liczbe wierszy i kolumn oraz wpisz macierz a i macierz b." << endl;
        cout << "Podaj liczbe wierszy: " << endl;
        cin >> rows;
        cout << "Podaj liczbe kolumn: " << endl;
        cin >> columns;
        cout << "Jaki typ liczb chcesz wpisac do macierzy? (int czy double)" << endl;
        cin >> type;
        if (type == "int") {

            //tworze i alokuje pamiec dla macierzy a
            int **matrix_a = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new int[columns];

            //tworze i alokuje pamiec dla macierzy b
            int **matrix_b = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_b[k] = new int[columns];

            cout << "Podaj pierwsza macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            cout << "Podaj druga macierz: " << endl;
            problems_matrix(matrix_b, rows, columns);

            //wyswietlam macierz a
            cout<<"Macierz a: "<<endl;

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    cout<<matrix_a[i][j]<<" ";
                }
                cout<<endl;
            }

            //wyswietlam macierz b
            cout<<"Macierz b: "<<endl;

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    cout<<matrix_b[i][j]<<" ";
                }
                cout<<endl;
            }

            //tworze i alokuje pamiec macierzy wynikowej
            int **matrix_score = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_score[k] = new int[columns];

            //wywoluje funkcje
            matrix_score = subtractMatrix(matrix_a, matrix_b, rows, columns);

            //wyswietlam wynik
            cout<<"Roznica = "<<endl;
            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    cout<<matrix_score[i][j]<<" ";
                }
                cout<<endl;
            }

        } else if (type == "double") {

            //tworze i alokuje pamiec dla macierzy a
            double **matrix_a = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new double[columns];

            //tworze i alokuje pamiec dla macierzy b
            double **matrix_b = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_b[k] = new double[columns];

            cout << "Podaj pierwsza macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            cout << "Podaj druga macierz: " << endl;
            problems_matrix(matrix_b, rows, columns);

            //wyswietlam macierz a
            cout<<"Macierz a: "<<endl;

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    cout<<matrix_a[i][j]<<" ";
                }
                cout<<endl;
            }

            //wyswietlam macierz b
            cout<<"Macierz b: "<<endl;

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    cout<<matrix_b[i][j]<<" ";
                }
                cout<<endl;
            }

            //tworze i alokuje pamiec macierzy wynikowej
            double **matrix_score = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_score[k] = new double[columns];

            matrix_score = subtractMatrix(matrix_a, matrix_b, rows, columns);

            //wyswietlam wynik
            cout<<"Roznica = "<<endl;
            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    cout<<matrix_score[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    if((string)argv[1] == "multiplyMatrix") {

        //uzytkownik wczytuje potrzebne dane
        cout << "Podaj liczbe wierszy i kolumn  pierwszej macierzy, liczbe kolumn drugiej macierzy oraz wpisz macierz a i macierz b." << endl;
        cout << "Podaj liczbe wierszy pierwszej macierzy: " << endl;
        cin >> rows;
        cout << "Podaj liczbe kolumn pierwszej macierzy: " << endl;
        cin >> columns;
        cout << "Podaj liczbe kolumn drugiej macierzy: " << endl;
        cin >> columns_2;
        cout << "Jaki typ liczb chcesz wpisac do macierzy? (int czy double)" << endl;
        cin >> type;
        if (type == "int") {

            //tworze i alokuje pamiec dla macierzy a
            int **matrix_a = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new int[columns];

            //tworze i alokuje pamiec dla macierzy b
            int **matrix_b = new int *[columns];

            for (int k = 0; k < columns; k++)
                matrix_b[k] = new int[columns_2];

            cout << "Podaj pierwsza macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            cout << "Podaj druga macierz: " << endl;
            problems_matrix(matrix_b, columns, columns_2);

            //wyswietlam macierz a
            cout<<"Macierz a: "<<endl;

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    cout<<matrix_a[i][j]<<" ";
                }
                cout<<endl;
            }

            //wyswietlam macierz b
            cout<<"Macierz b: "<<endl;

            for(int i = 0; i < columns; i++){
                for(int j = 0; j < columns_2; j++){
                    cout<<matrix_b[i][j]<<" ";
                }
                cout<<endl;
            }

            //tworze i alokuje pamiec macierzy wynikowej
            int **matrix_score = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_score[k] = new int[columns_2];

            matrix_score = multiplyMatrix(matrix_a, matrix_b, rows, columns, columns_2);

            //wyswietlam wynik
            cout<<"Iloczyn = "<<endl;
            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns_2; j++){
                    cout<<matrix_score[i][j]<<" ";
                }
                cout<<endl;
            }

        } else if (type == "double") {

            //tworze i alokuje pamiec macierzy a
            double **matrix_a = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new double[columns];

            //tworze i alokuje pamiec macierzy b
            double **matrix_b = new double *[columns];

            for (int k = 0; k < rows; k++)
                matrix_b[k] = new double[columns_2];

            cout << "Podaj pierwsza macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            cout << "Podaj druga macierz: " << endl;
            problems_matrix(matrix_b, columns, columns_2);

            //wyswietlam macierz a
            cout<<"Macierz a: "<<endl;

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    cout<<matrix_a[i][j]<<" ";
                }
                cout<<endl;
            }

            //wyswietlam macierz b
            cout<<"Macierz b: "<<endl;

            for(int i = 0; i < columns; i++){
                for(int j = 0; j < columns_2; j++){
                    cout<<matrix_b[i][j]<<" ";
                }
                cout<<endl;
            }
            //tworze i alokuje pamiec macierzy wynikowej
            double **matrix_score = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_score[k] = new double[columns_2];

            //wywoluje funkcje
            matrix_score = multiplyMatrix(matrix_a, matrix_b, rows, columns, columns_2);

            //wyswietlam wynik
            cout<<"Iloczyn = "<<endl;
            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns_2; j++){
                    cout<<matrix_score[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    if((string)argv[1] == "multiplyByScalar"){

        //uzytkownik wczytuje potrzebne dane
        cout<<"Podaj liczbe wierszy i kolumn oraz wpisz macierz."<<endl;
        cout << "Podaj liczbe wierszy: " << endl;
        cin>>rows;
        cout << "Podaj liczbe kolumn: " << endl;
        cin>>columns;
        cout << "Jaki typ skalara oraz typ liczb chcesz wpisac do macierzy? (int czy double)" << endl;
        cin >> type;
        if (type == "int") {

            //tworze i alokuje pamiec dla macierzy a
            int **matrix_a = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new int[columns];

            //wczytuje macierz i skalar
            cout << "Podaj macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            cout << "Podaj skalar: " << endl;
            problems_skalar(skalar_i);

            //tworze i alokuje pamiec dla macierzy wynikowej
            int **matrix_score = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_score[k] = new int[columns];

            //wywoluje funkcje i wyswietlam wynik
            matrix_score = multiplyByScalar(matrix_a, rows, columns, skalar_i);
            cout<<"Wynik = "<<endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    cout << matrix_score[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else if (type == "double") {

            //tworze i alokuje pamiec dla macierzy a
            double **matrix_a = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new double[columns];

            //wczytiuje macierz i skalar
            cout << "Podaj macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            cout << "Podaj skalar: " << endl;
            problems_skalar(skalar_d);

            //tworze i alokuje pamiec dla macierzy wynikowej
            double **matrix_score = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_score[k] = new double[columns];

            //wywoluje funkcje i wyswietlam wynik
            matrix_score = multiplyByScalar(matrix_a, rows, columns, skalar_d);
            cout<<"Wynik = "<<endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    cout << matrix_score[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    if((string)argv[1] == "transpozeMatrix"){

        //uzytkownik wczytuje potrzebne dane
        cout<<"Nalezy podac liczbe wierszy, kolumn oraz wpisac macierz."<<endl;
        cout << "Podaj liczbe wierszy: " << endl;
        cin>>rows;
        cout << "Podaj liczbe kolumn: " << endl;
        cin>>columns;
        cout << "Jaki typ liczb chcesz wpisac do macierzy? (int czy double)" << endl;
        cin >> type;
        if (type == "int") {

            //tworze i alokuje pamiec dla macierzy a
            int **matrix_a = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new int[columns];

            //wczytuje macierz
            cout << "Podaj macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            int **matrix_score = new int *[columns];

            for (int k = 0; k < columns; k++)
                matrix_score[k] = new int[rows];

            // wywoluje funkcje i wyswietlam wynik
            matrix_score = transpozeMatrix(matrix_a, rows, columns);
            cout<<"Wynik = "<<endl;
            for (int i = 0; i < columns; i++) {
                for (int j = 0; j < rows; j++) {
                    cout << matrix_score[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else if (type == "double") {

            //tworze i alokuje pamiec dla macierzy a
            double **matrix_a = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new double[columns];

            // wczytuje macierz
            cout << "Podaj macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            //tworze i alokuje pamiec macierzy wynikowej
            double **matrix_score = new double *[columns];

            for (int k = 0; k < columns; k++)
                matrix_score[k] = new double[rows];

            //wywoluje funckje i wyswietlam wynik
            matrix_score = transpozeMatrix(matrix_a, rows, columns);
            cout<<"Wynik = "<<endl;
            for (int i = 0; i < columns; i++) {
                for (int j = 0; j < rows; j++) {
                    cout << matrix_score[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    if((string)argv[1] == "powerMatrix"){

        //uzytkownik wczytuje potrzebne dane
        cout<<"Nalezy podac liczbe wierszy, kolumn, wpisac macierz oraz potege. \nPamietaj ze potegowac mozna tylko macierz kwadratowa."<<endl;
        cout << "Podaj liczbe wierszy: " << endl;
        cin>>rows;
        cout << "Podaj liczbe kolumn: " << endl;
        cin>>columns;
        cout << "Podaj potege: "<< endl;
        problems_exponent(exponent);

        cout << "Jaki typ liczb chcesz wpisac do macierzy? (int czy double)" << endl;
        cin >> type;
        if (type == "int") {

            //tworze i alokuje pamiec dla macierzy a
            int **matrix_a = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new int[columns];

            //wczytuje macierz
            cout << "Podaj macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            //tworze i alokuje pamiec dla macierzy wynikowej
            int **matrix_score = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_score[k] = new int [columns];

            //wywoluje funkcje i wyswietlam wynik
            matrix_score = powerMatrix(matrix_a, rows, columns, exponent);
            cout<<"Wynik = "<<endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    cout << matrix_score[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else if (type == "double") {

            //tworze i alokuje pamiec dla macierzy a
            double **matrix_a = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new double[columns];

            //wczytuje macierz
            cout << "Podaj macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            //tworze i alokuje pamiec dla macierzy wynikowej
            double **matrix_score = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_score[k] = new double [columns];

            //wywoluje funkcje i wyswietlam wynik
            matrix_score = powerMatrix(matrix_a, rows, columns, exponent);
            cout<<"Wynik = "<<endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    cout << matrix_score[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    if((string)argv[1] == "determinantMatrix"){

        //uzytkownik wczytuje potrzebne dane
        cout<<"Nalezy podac liczbe wierszy, kolumn oraz wpisac macierz.\nPamietaj aby macierz byla kwadratowa."<<endl;
        cout << "Podaj liczbe wierszy: " << endl;
        cin>>rows;
        cout << "Podaj liczbe kolumn: " << endl;
        cin>>columns;
        cout << "Jaki typ liczb chcesz wpisac do macierzy? (int czy double)" << endl;
        cin >> type;
        if (type == "int") {

            //tworze i alokuje pamiec dla macierzy a
            int **matrix_a = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new int[columns];

            //wczytuje macierz
            cout << "Podaj macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            //wywoluje funkcje i wyswietlam wynik
            result_i = determinanMatrix(matrix_a, rows, columns);
            cout<<"Wyznacznik = "<<result_i<<endl;
        }
        else if (type == "double") {

            //tworze i alokuje pamiec dla macierzy a
            double **matrix_a = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new double[columns];

            // wczytuje macierz
            cout << "Podaj macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            //wywoluje funckje i wyswietlam wynik
            result_d = determinanMatrix(matrix_a, rows, columns);
            cout<<"Wyznacznik = "<<result_d<<endl;
        }
    }
    if((string)argv[1] == "matrixIsDiagonal"){

        //uzytkownik wczytuje potrzebne dane
        cout<<"Nalezy podac liczbe wierszy, kolumn oraz wpisac macierz."<<endl;
        cout << "Podaj liczbe wierszy: " << endl;
        cin>>rows;
        cout << "Podaj liczbe kolumn: " << endl;
        cin>>columns;
        cout << "Jaki typ liczb chcesz wpisac do macierzy? (int czy double)" << endl;
        cin >> type;
        if (type == "int") {

            //tworze i alokuje pamiec dla macierzy a
            int **matrix_a = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new int[columns];

            //wczytuje macierz
            cout << "Podaj macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            //wywoluje funkcje i wyswietlam wynik
            if( matrixIsDiagonal(matrix_a, rows, columns) == true){
                cout<<"Macierz jest diagonalna."<<endl;
            }
            else{
                cout<<"Macierz nie jest diagonalna."<<endl;
            }
        }
        else if (type == "double") {

            //tworze i alokuje pamiec dla macierzy a
            double **matrix_a = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new double[columns];

            //wczytuje macierz
            cout << "Podaj macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            //wywoluje funkcje i wyswietlam wynik
            if (matrixIsDiagonal(matrix_a, rows, columns) == true) {
                cout << "Macierz jest diagonalna." << endl;
            } else {
                cout << "Macierz nie jest diagonalna." << endl;
            }
        }
    }
    if((string)argv[1] == "swap"){

        //uzytkownik wczytuje potrzebne dane
        cout<<"Nalezy podac dwie liczby, ktore chcesz zamienic: "<<endl;
        cout<<"Jaki typ liczb chcesz wpisac (int czy double)?: "<<endl;
        cin>>type;
        if(type == "int"){

            //wczytuje zmienne
            cout<<"Podaj pierwsza liczbe: \na = ";
            problems_swap_a(a_i);
            cout<<endl;

            cout<<"Podaj druga liczbe: \nb = ";
            problems_swap_b(b_i);
            cout<<endl;
            //wywoluje funckje
            swap(a_i, b_i);

            //wyswietlam wynik
            cout<<"Wynik = \na = "<<a_i<<"\nb = "<<b_i<<endl;
        }
        else if(type == "double"){

            //wvzytuje zmienne
            cout<<"Podaj pierwsza liczbe: \na = ";
            problems_swap_a(a_d);
            cout<<endl;

            cout<<"Podaj druga liczbe: \nb = ";
            problems_swap_b(b_d);
            cout<<endl;

            //wywoluje funckje
            swap(a_d, b_d);

            //wyswietlam wynik
            cout<<"Wynik = \na = "<<a_d<<"\nb = "<<b_d<<endl;
        }
    }
    if((string)argv[1] == "sortRow"){

        //uzytkownik wczytuje potrzebne dane
        cout<<"Nalezy podac liczbe kolumn, oraz wpisac tablice."<<endl;
        cout<<"Podaj liczbe kolumn: "<<endl;
        cin>>columns;
        cout<<"Jaki typ liczb chcesz wpisac do tablicy? (int czy double)"<<endl;
        cin>>type;
        if(type == "int") {

            //tworze i alokuje pamiec tablicy
            int *tab = new int[columns];

            //wczytuje tablice
            cout << "Wpisz tablice: " << endl;
            problems_tab(tab, columns);

            //wyswietlam wynik
            cout<<"Posortowana tablica = "<<endl;

            int *tab_result = sortRow(tab, columns);
            for(int i = 0; i < columns; i++){
                cout<<tab_result[i]<<" ";
            }
            cout<<endl;
        }
        else if(type == "double"){

            //tworze i alokuje pamiec tablicy
            double *tab = new double[columns];

            //wczytuje tablice
            cout << "Wpisz tablice: " << endl;
            problems_tab(tab, columns);

            //wyswietlam wynik
            cout<<"Posortowana tablica = "<<endl;

            double *tab_result = sortRow(tab, columns);
            for(int i = 0; i < columns; i++){
                cout<<tab_result[i]<<" ";
            }
            cout<<endl;
        }
    }
    if((string)argv[1] == "sortRowsInMatrix"){

        //uzytkownik wczytuje potrzebne dane
        cout<<"Nalezy podac liczbe wierszy, kolumn oraz wpisac macierz."<<endl;
        cout << "Podaj liczbe wierszy: " << endl;
        cin>>rows;
        cout << "Podaj liczbe kolumn: " << endl;
        cin>>columns;
        cout << "Jaki typ liczb chcesz wpisac do macierzy? (int czy double)" << endl;
        cin >> type;
        if (type == "int") {

            //tworze i alokuje pamiec dla macierzy a
            int **matrix_a = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new int[columns];

            //wczytuje macierz
            cout << "Podaj macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            //tworze i alokuje pamiec macierzy wynikowej
            int **matrix_score = new int *[rows];

            for (int k = 0; k < rows; k++)
                matrix_score[k] = new int[columns];

            //wywoluje funkcje i wyswietlam wynik
            matrix_score = sortRowsInMatrix(matrix_a, rows, columns);
            cout<<"Posortowana macierz = "<<endl;

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++) {
                    cout << matrix_score[i][j] << " ";
                }
                cout<<endl;

            }
        }
        else if (type == "double") {

            //tworze i alokuje pamiec dla macierzy a
            double **matrix_a = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_a[k] = new double[columns];

            //wczytuje macierz
            cout << "Podaj macierz: " << endl;
            problems_matrix(matrix_a, rows, columns);

            //tworze i alokuje pamiec macierzy wynikowej
            double **matrix_score = new double *[rows];

            for (int k = 0; k < rows; k++)
                matrix_score[k] = new double[columns];

            //wywoluje funkcje i wyswietlam wynik
            matrix_score = sortRowsInMatrix(matrix_a, rows, columns);
            cout << "Posortowana macierz = " << endl;

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    cout << matrix_score[i][j] << " ";
                }
                cout << endl;

            }
        }
    }
    else {
        help();
        exit(0);
    }
    return 0;
}

