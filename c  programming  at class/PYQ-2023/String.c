#include <stdio.h>
#include<stdlib.h>

char *concatenate(char *A, char *B) {
    int lenA = 0, lenB = 0, i, j;
    
    // Calculate length of A manually
    while (A[lenA] != '\0') {
        lenA++;
    }

    // Calculate length of B manually
    while (B[lenB] != '\0') {
        lenB++;
    }

    // Allocate memory for concatenated string (+1 for null terminator)
    char *result = (char *)malloc((lenA + lenB + 1) * sizeof(char));
    
    if (result == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    // Copy A into result
    for (i = 0; i < lenA; i++) {
        result[i] = A[i];
    }

    // Append B after A
    for (j = 0; j < lenB; j++) {
        result[i + j] = B[j];
    }

    // Null-terminate the new string
    result[i + j] = '\0';

    return result;
}

int main() {
    char A[] = "Hello";
    char B[] = "World";

    // Call the function
    char *C = concatenate(A, B);

    // Print result
    if (C != NULL) {
        printf("Concatenated String: %s\n", C);
        free(C); // Free allocated memory
    }

    return 0;
}
