#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("enter the number of eleents in the array: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    if (arr == NULL){
        printf("Error");
        return 1;
    }

    arr[1] = 5;

    printf("The num of elements in the array is %d\n", n);
    printf("The size of the elements are: %zu bytes\n", sizeof(*arr));
    printf("val in first element: %d\n", arr[1]);

    free(arr);



}

    double **all2dmatrix(int rows, int cols){
        double **arr = malloc(rows * sizeof(double *));
        if (arr = NULL){
            return 1;
        }

        for (int i =0; i<rows; i++){
            arr[i] = malloc(rows * sizeof(double));
            if (arr[i] == NULL){
                return 1;
            }
        }
       
    }

    double **matrixmult(int **a, int **b, int rowsA, int colsA, int colsB){
        double **C = all2dmatrix(rowsA, colsB);
    }