#include <stdio.h>
#include <stdlib.h>

double **allocate2DArray(int rows, int cols){
    double **arr = malloc(rows* sizeof(double *));
    if(arr == NULL){
        printf("Error allocating memory");
        free(arr);
        return 1;
    }
    for (int i = 0; i < rows; i++){
        arr[i] = malloc(rows * sizeof(double));
        if(arr[i]== NULL){
            printf("Error allocating memory");
            return 1;
        }
    }

}

void free2DArray(int rows, double **arr){
    for (int i = 0; i < rows; i++){
        free(arr[i]);
    }
    free(arr);
}

// Function to perform matrix addition
double **MatrixAddition(double **A, double **B, int rows, int cols) {
    double **C = allocate2Darray(rows, cols);
    if (C == NULL) return NULL;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j]; // for subtraction just change sign
        }
    }
    return C;
}

// Function to perform matrix multiplication
double **MatrixMultiplication(double **A, double **B, int rowsA, int colsA, int colsB) {
    double **C = allocate2dArray(rowsA, colsB);
    if (C == NULL) return NULL;

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

// Function to perform matrix division (only for n×n and n×1 matrices)
double **MatrixDivision(double **A, double **B, int n) {
    double **C = allocate2dArray(n, 1);
    if (C == NULL) return NULL;

    for (int i = 0; i < n; i++) {
        if (B[i][0] == 0) {
            printf("Error: Division by zero at row %d!\n", i);
            free2DArray(n, C);
            return NULL;
        }
        C[i][0] = A[i][i] / B[i][0];
    }
    return C;
}

int main() {

    return 0;
}
