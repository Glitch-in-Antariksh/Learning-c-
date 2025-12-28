#include <stdio.h>

/* Function to input matrix along with rows and columns */
void inputMatrix(int mat[10][10], int *rows, int *cols) {
    int i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", rows, cols);

    for (i = 0; i < *rows; i++) {
        for (j = 0; j < *cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

/* Function to display matrix */
void displayMatrix(int mat[10][10], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[10][10], B[10][10];
    int r1, c1, r2, c2;

    printf("\nInput Matrix A\n");
    inputMatrix(A, &r1, &c1);

    printf("\nInput Matrix B\n");
    inputMatrix(B, &r2, &c2);

    printf("\nMatrix A:\n");
    displayMatrix(A, r1, c1);

    printf("\nMatrix B:\n");
    displayMatrix(B, r2, c2);

    return 0;
}
