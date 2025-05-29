#include <stdio.h>

#define SIZE 10  // Maximum matrix size (adjustable)

int main() {
    int matrix[SIZE][SIZE], transpose[SIZE][SIZE];
    int i, j, n, isSymmetric = 1;

   

    // Input matrix size
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute the transpose of the matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Compare matrix with its transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != transpose[i][j]) {
                isSymmetric = 0;  // Not symmetric
                break;
            }
        }
        if (!isSymmetric) break;
    }

    // Output the result
    if (isSymmetric)
        printf("The matrix is Symmetric.\n");
    else
        printf("The matrix is NOT Symmetric.\n");

    return 0;
}
