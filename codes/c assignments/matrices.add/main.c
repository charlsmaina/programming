#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 2;
    int cols = 2;

    int matrix1[2][2] = {
        {1, 2},
        {3, 4}
    };

    int matrix2[2][2] = {
        {5, 6},
        {7, 8}
    };

    int resultMatrix[2][2];

    // Add matrices
    addMatrices(rows, cols, matrix1, matrix2, resultMatrix);

    // Display matrices and result
    printf("Matrix 1:\n");
    displayMatrix(rows, cols, matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(rows, cols, matrix2);

    printf("\nSum of matrices:\n");
    displayMatrix(rows, cols, resultMatrix);

    return 0;
}
