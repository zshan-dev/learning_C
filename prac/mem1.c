#include <stdio.h>
#include <stdlib.h>

// Function to allocate a 2D matrix
double **all2dmatrix(int rows, int cols) {
    double **arr = malloc(rows * sizeof(double *));
    if (arr == NULL) {
        return NULL;
    }

    for (int i = 0; i < rows; i++) {
        arr[i] = malloc(cols * sizeof(double));
        if (arr[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(arr[j]);
            }
            free(arr);
            return NULL;
        }
    }
    return arr;
}

// Function to free a 2D matrix
void free_matrix(double **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    if (n > 1) {
        arr[1] = 5;
    }

    printf("The number of elements in the array is %d\n", n);
    printf("The size of one element: %zu bytes\n", sizeof(*arr));

    if (n > 1) {
        printf("Value in second element: %d\n", arr[1]);
    }

    free(arr);
    return 0;
}
