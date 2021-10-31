#ifndef JIPP_LIBRARY_H
#define JIPP_LIBRARY_H
int **addMatrix(int **matrix_a, int **matrix_b, int rows, int columns);
double **addMatrix(double **matrix_a, double **matrix_b, int rows, int columns);
int **subtractMatrix(int **matrix_a, int **matrix_b, int rows, int columns);
double **subtractMatrix(double **matrix_a, double **matrix_b, int rows, int columns);
int **multiplyMatrix(int **matrix_a, int **matrix_b, int rows, int columns, int columns_2);
double **multiplyMatrix(double **matrix_a, double **matrix_b, int rows, int columns, int columns_2);
int **multiplyByScalar(int **matrix_a, int rows, int columns, int skalar);
double **multiplyByScalar(double **matrix_a, int rows, int columns, double skalar);
int **transpozeMatrix(int **matrix_a, int rows, int columns);
double **transpozeMatrix(double **matrix_a, int rows, int columns);
int **powerMatrix(int **matrix_a, int rows, int columns, int exponent);
double **powerMatrix(double **matrix_a, int rows, int columns, int exponent);
int determinanMatrix(int **matrix_a, int rows, int columns);
double determinanMatrix(double **matrix_a, int rows, int columns);
bool matrixIsDiagonal(int **matrix_a, int l_wierszy, int l_kolumn);
bool matrixIsDiagonal(double **matrix_a, int l_wierszy, int l_kolumn);
void swap(int &a, int &b);
void swap(double &a, double &b);
int *sortRow(int *tab, int columns);
double *sortRow(double *tab, int columns);
int **sortRowsInMatrix(int **matrix_a, int rows, int columns);
double **sortRowsInMatrix(double **matrix_a, int rows, int columns);
void help();

#endif //JIPP_LIBRARY_H
