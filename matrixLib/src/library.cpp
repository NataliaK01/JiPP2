#include "../include/library.h"
#include<iostream>
#include<math.h>
#include <bits/stdc++.h>

using namespace std;

int **addMatrix(int **matrix_a, int **matrix_b, int rows, int columns){

    //alokuje pamiec macierzy, do ktorej zapisze wynik
    int **matrix_score = new int *[rows];

    for(int k=0; k<rows; k++)
        matrix_score[k] = new int [columns];

    //dodaje macierze
    for(int i=0; i<rows; i++)
        for(int j=0; j<columns; j++){
            matrix_score[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }

    //zwracam wynik
    return matrix_score;
}

double **addMatrix(double **matrix_a, double **matrix_b, int rows, int columns){

    //alokuje pamiec macierzy, do ktorej zapisze wynik
    double **matrix_score = new double *[rows];

    for(int k=0; k<rows; k++)
        matrix_score[k] = new double [columns];

    //dodaje macierze
    for(int i=0; i<rows; i++)
        for(int j=0; j<columns; j++){
            matrix_score[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }

    //zwracam wynik
    return matrix_score;
}

int **subtractMatrix(int **matrix_a, int **matrix_b, int rows, int columns) {

    //alokuje pamiec macierzy, do ktorej zapisze wynik
    int **matrix_score = new int *[rows];

    for (int k = 0; k < rows; k++)
        matrix_score[k] = new int[columns];

    //odejmuje macierze
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++) {
            matrix_score[i][j] = matrix_a[i][j] - matrix_b[i][j];
        }

    //zwracam wynik
    return matrix_score;
}

double **subtractMatrix(double **matrix_a, double **matrix_b, int rows, int columns){

    //alokuje pamiec macierzy, do ktorej zapisze wynik
    double **matrix_score = new double *[rows];

    for(int k=0; k<rows; k++)
        matrix_score[k] = new double [columns];

    //odejmuje macierze
    for(int i=0; i<rows; i++)
        for(int j=0; j<columns; j++){
            matrix_score[i][j] = matrix_a[i][j] - matrix_b[i][j];
        }

    //zwracam wynik
    return matrix_score;

}

int **multiplyMatrix(int **matrix_a, int **matrix_b, int rows, int columns, int columns_2){

    //alokuje pamiec macierzy, do ktorej zapisze wynik
    int **matrix_score = new int *[rows];
    for (int k = 0; k < rows; k++)
        matrix_score[k] = new int[columns_2];

    //mnoze dwie macierze
    for( int i = 0; i < rows; i++ ) {
        for (int j = 0; j < columns_2; j++) {
            matrix_score[i][j] = 0;
            for (int k = 0; k < columns; k++) {
                matrix_score[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
    //zwracam wynik
    return matrix_score;
}

double **multiplyMatrix(double **matrix_a, double **matrix_b, int rows, int columns, int columns_2){

    //alokuje pamiec macierzy, do ktorej zapisze wynik
    double **matrix_score = new double *[rows];
    for (int k = 0; k < rows; k++)
        matrix_score[k] = new double[columns_2];

    //mnoze dwie macierze
    for( int i = 0; i < rows; i++ ) {
        for (int j = 0; j < columns_2; j++) {
            matrix_score[i][j] = 0;
            for (int k = 0; k < columns; k++) {
                matrix_score[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
    //zwracam wynik
    return matrix_score;
}

int **multiplyByScalar(int **matrix_a, int rows, int columns, int skalar){

    //mnoze macierz przez skalar
    for( int i = 0; i < rows; i++ )
        for( int j = 0; j < columns; j++ ) matrix_a [ i ][ j ] *= skalar;
    return matrix_a;

}
double **multiplyByScalar(double **matrix_a, int rows, int columns, double skalar){

    //mnoze macierz przez skalar
    for( int i = 0; i < rows; i++ )
        for( int j = 0; j < columns; j++ ) matrix_a [ i ][ j ] *= skalar;
        return matrix_a;
}
int **transpozeMatrix(int **matrix_a, int rows, int columns){

    int **matrix_score = new int *[columns];
    for (int k = 0; k < columns; k++)
        matrix_score[k] = new int[rows];

    //wykonuje transponowanie macierzy

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < columns; ++j)
            matrix_score[j][i] = matrix_a[i][j];
        //zwracam wynik
    return matrix_score;
}

double **transpozeMatrix(double **matrix_a, int rows, int columns){

    double **matrix_score = new double *[columns];
    for (int k = 0; k < columns; k++)
        matrix_score[k] = new double[rows];

    //wykonuje transponowanie macierzy

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < columns; ++j)
            matrix_score[j][i] = matrix_a[i][j];
    //zwracam wynik
    return matrix_score;

}
int **powerMatrix(int **matrix_a, int rows, int columns, int exponent){

    int r; // r - result

    //alokuje pamiec macierzy, do ktorej zapisze wynik
    int **matrix_score = new int *[rows];

    for(int i = 0; i < rows; i++){
        matrix_score[i] = new int [columns];
    }

    //alokuje pamiec macierzy pomocniczej

    int **temp = new int *[rows];

    for(int i = 0; i < rows; i++){
        temp[i] = new int[columns];
    }

    //kopiuje macierz matrix_score, a kopie umieszczam w macierzy matrix_a
    for(int j = 0; j < rows; j++){
        for(int k = 0; k < columns; k++){
            matrix_score[j][k] = matrix_a[j][k];
        }
    }

    //poteguje macierz
    while(exponent > 1){
        for(int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                r = 0;
                for (int k = 0; k < columns; k++)
                {
                    r += matrix_score[i][k] * matrix_a[k][j];
                }
                temp[i][j] = r;
            }
        }
        for (int k = 0; k < rows; k++)
        {
            for (int l = 0; l < columns;l++)
                matrix_score[k][l] = temp[k][l];
        }

        exponent--;
    }

    //zwracam wynik
    return matrix_score;
}
double **powerMatrix(double **matrix_a, int rows, int columns, int exponent){

    double r; // r - result

    //alokuje pamiec macierzy, do ktorej zapisze wynik
    double **matrix_score = new double *[rows];

    for(int i = 0; i < rows; i++){
        matrix_score[i] = new double [columns];
    }

    //alokuje pamiec macierzy pomocniczej
    double **temp = new double *[rows];

    for(int i = 0; i < rows; i++){
        temp[i] = new double[columns];
    }

    //kopiuje macierz matrix_score, a kopie umieszczam w macierzy matrix_a

    for(int j = 0; j < rows; j++){
        for(int k = 0; k < columns; k++){
            matrix_score[j][k] = matrix_a[j][k];
        }
    }

    //poteguje macierz
    while(exponent > 1){
        for(int i = 0; i < rows; i++ ){
            for (int j = 0; j < columns; j++){
                r = 0;
                for (int k = 0; k < columns; k++)
                {
                    r += matrix_score[i][k] * matrix_a[k][j];
                }
                temp[i][j] = r;
            }
        }
        for (int k = 0; k < rows; k++)
        {
            for (int l = 0; l < columns;l++)
                matrix_score[k][l] = temp[k][l];
        }

        exponent--;
    }

    //zwracam wynik
    return matrix_score;
}

int determinanMatrix(int **matrix_a, int rows, int columns){

    //inicjuje zamienna do zapisania wyniku
        int det = 0;

    //alokuje pamiec macierzy, do ktorej zapisze wynik
    int **matrix_score = new int *[rows];

        for (int i = 0; i < rows; i++) {
            matrix_score[i] = new int[columns];
        }

        //licze wyznacznik
        if (rows == 2) {
            return ((matrix_a[0][0] * matrix_a[1][1]) - (matrix_a[1][0] * matrix_a[0][1]));
        }
        else {
            for (int x = 0; x < rows; x++) {
                int subi = 0;
                for (int i = 1; i < rows; i++) {
                    int subj = 0;
                    for (int j = 0; j < rows; j++) {
                        if (j == x)
                            continue;
                        matrix_score[subi][subj] = matrix_a[i][j];
                        subj++;
                    }
                    subi++;
                }
                det = det + (pow(-1, x) * matrix_a[0][x] * determinanMatrix(matrix_score, rows - 1, rows -1));
            }
        }

        //usuwam niepotrzebna macierz
        for(int i = 0; i < rows; i++) {
            delete[] matrix_score[i];
        }
        delete [] matrix_score;
        matrix_score = NULL;

        //zwracam wynik
        return det;
}
double determinanMatrix(double **matrix_a, int rows, int columns){

    //inicjuje zamienna do zapisania wyniku
    double det = 0;

    //alokuje pamiec macierzy, do ktorej zapisze wynik
    double **matrix_score = new double *[rows];

    for (int i = 0; i < rows; i++) {
        matrix_score[i] = new double[columns];
    }

    //licze wyznacznik
    if (rows == 2) {
        return ((matrix_a[0][0] * matrix_a[1][1]) - (matrix_a[1][0] * matrix_a[0][1]));
    }
    else {
        for (int x = 0; x < rows; x++) {
            int subi = 0;
            for (int i = 1; i < rows; i++) {
                int subj = 0;
                for (int j = 0; j < rows; j++) {
                    if (j == x)
                        continue;
                    matrix_score[subi][subj] = matrix_a[i][j];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1, x) * matrix_a[0][x] * determinanMatrix(matrix_score, rows - 1, rows -1));
        }
    }

    //usuwam niepotrzebna macierz
    for(int i = 0; i < rows; i++) {
        delete[] matrix_score[i];
    }
    delete [] matrix_score;
    matrix_score = NULL;

    //zwracam wynik
    return det;
}
bool matrixIsDiagonal (int **matrix_a, int row, int columns){

    //sprawdzam czy macierz jest diagonalna
    for (int i = 0; i < row; i++){
        for (int j = 0; j < columns; j++){
            if (i == j) continue;
            if (matrix_a[i][j] != 0) return false;
        }
    }
    return true;
}
bool matrixIsDiagonal (double **matrix_a, int row, int columns){

    //sprawdzam czy macierz jest diagonalna
    for (int i = 0; i < row; i++){
        for (int j = 0; j < columns; j++){
            if (i == j) continue;
            if (matrix_a[i][j] != 0) return false;
        }
    }
    return true;
}
void swap(int &a, int &b){

    //wykonuje funkcje zamiany liczb
    int c = a;
    a = b;
    b = c;
}
void swap(double &a, double &b){

    //wykonuje funkcje zamiany liczb
    double c = a;
    a = b;
    b = c;
}
int *sortRow(int *tab, int columns){

    //deklaruje zmienna pomocnicza
    int pom;

    //sortuje tablice za pomoca sortowania babelkowego

    for(int i=0; i<(columns-1); i++){
        for(int j=0; j<(columns-i-1); j++){
            if(tab[j]>tab[j+1]){
                pom = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = pom;
            }
        }
    }
    return tab;
}
double *sortRow(double *tab, int columns){

    //deklaruje zmienna pomocnicza
    double pom;

    //sortuje tablice za pomoca sortowania babelkowego
    for(int i=0; i<(columns-1); i++){
        for(int j=0; j<(columns-i-1); j++){
            if(tab[j]>tab[j+1]){
                pom = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = pom;
            }
        }
    }
    return tab;
}
int **sortRowsInMatrix(int **matrix_a, int rows, int columns){

    //sortuje macierz
    for(int i = 0; i < rows; i++){
        sortRow(matrix_a[i], columns);
    }
    return matrix_a;
}
double **sortRowsInMatrix(double **matrix_a, int rows, int columns){

    //sortuje macierz
    for(int i = 0; i < rows; i++){
        sortRow(matrix_a[i], columns);
    }
    return matrix_a;
}

void help(){

    //wyswietlam polecenia potrzebne dla uzytkownika
    cout<<"Kalkulator dzialan na macierzach: "<<endl;
    cout<<"1. addMatrix - dodawanie dwoch macierzy\n"
          "2. subtractMatrix - odejmowanie dwoch macierzy \n"
          "3. multiplyMatrix - mnozenie dwoch macierzy \n"
          "4. multiplyByScalar - mnozenie macierzy przez skalar \n"
          "5. transpozeMatrix - transponowanie macierzy \n"
          "6. powerMatrix - potegowanie macierzy \n"
          "7. determinantMatrix - wyznacznik macierzy \n"
          "8. matrixIsDiagonal - sprawdzanie, czy macierz jest diagonalna \n"
          "9. swap - zamiana dwoch wartosci miejscami \n"
          "10. sortRow - sortowanie tablicy \n"
          "11. sortRowsInMatrix - Sortowanie macierzy\n"<<endl;
    cout<<"Ktore dzialanie chcesz wykonac?\n"<<endl;

}


