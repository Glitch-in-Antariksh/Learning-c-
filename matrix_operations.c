#include <stdio.h>
#include "matrix_functions.h"
/* Matrix Addition */
void addMatrices(int A[10][10], int B[10][10], int C[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
/* Matrix Multiplication */
void multiplyMatrices(
    int A[10][10],
    int B[10][10],
    int C[10][10],
    int r1, int c1, int c2
) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;
    printf("Input Matrix A\n");
    inputMatrix(A, &r1, &c1);
    printf("\nInput Matrix B\n");
    inputMatrix(B, &r2, &c2);

    /* Addition */
    if (r1 == r2 && c1 == c2) {
        addMatrices(A, B, C, r1, c1);
        printf("\nAddition Result:\n");
        displayMatrix(C, r1, c1);
    } else {
        printf("\nAddition not possible!\n");
    }

    /* Multiplication */
    if (c1 == r2) {
        multiplyMatrices(A, B, C, r1, c1, c2);
        printf("\nMultiplication Result:\n");
        displayMatrix(C, r1, c2);
    } else {
        printf("\nMultiplication not possible!\n");
    }

    return 0;
}
