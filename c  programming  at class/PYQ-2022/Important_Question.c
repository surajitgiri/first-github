#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    
    // Read the value of n from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    int *arr = (int *)malloc(n * sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read n integers from the user
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of product of consecutive numbers
    for (i = 0; i < n - 1; i++) {
        sum += arr[i] * arr[i + 1];
    }

    // Print the result
    printf("Sum of product of consecutive numbers: %d\n", sum);

    // Free the allocated memory
    free(arr);

    return 0;
}
