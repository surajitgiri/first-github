#include <stdio.h>
#include <stdlib.h>

// Function to check if the matrix is upper triangular
int isUpperTriangular(int **matrix, int n) {
    for (int i = 1; i < n; i++) {  // Start from row 1 (ignore first row)
        for (int j = 0; j < i; j++) { // Check lower triangle elements
            if (matrix[i][j] != 0) {
                return 0;  // Not an upper triangular matrix
            }
        }
    }
    return 1;  // Matrix is upper triangular
}

int main() {
    int n;
    
    // Take matrix size input
    printf("Enter the size of matrix (n): ");
    scanf("%d", &n);

    // Dynamically allocate memory for n x n matrix
    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    // Take matrix input
    printf("Enter elements of %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if matrix is upper triangular
    if (isUpperTriangular(matrix, n)) {
        printf("The matrix is an upper triangular matrix.\n");
    } else {
        printf("The matrix is NOT an upper triangular matrix.\n");
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
