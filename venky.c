#include <stdio.h>

#define ROWS 2
#define COLS 2

void multiply_matrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    int i, j, k;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (k = 0; k < COLS; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void print_matrix(int matrix[][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2},
                               {3, 4}};

    int matrix2[ROWS][COLS] = {{5, 6},
                               {7, 8}};

    int result[ROWS][COLS];

    multiply_matrices(matrix1, matrix2, result);

    printf("Matrix 1:\n");
    print_matrix(matrix1);

    printf("\nMatrix 2:\n");
    print_matrix(matrix2);

    printf("\nResult:\n");
    print_matrix(result);

    return 0;
}
