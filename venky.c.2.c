#include <stdio.h>

#define ROWS 3
#define COLS 3

void add_matrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
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
    int matrix1[ROWS][COLS] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};

    int matrix2[ROWS][COLS] = {{10, 11, 12},
                               {13, 14, 15},
                               {16, 17, 18}};

    int result[ROWS][COLS];

    add_matrices(matrix1, matrix2, result);

    printf("Matrix 1:\n");
    print_matrix(matrix1);

    printf("\nMatrix 2:\n");
    print_matrix(matrix2);

    printf("\nResult:\n");
    print_matrix(result);

    return 0;
}
