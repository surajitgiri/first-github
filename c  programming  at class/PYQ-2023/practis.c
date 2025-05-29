#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    // Dynamically allocate an array to store the inputs
    float *arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read inputs
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    // Calculate average
    average = sum / n;
    printf("\nAverage of the %d numbers is: %.2f\n", n, average);

    // Arrays to hold values below and above average
    // (Allocate maximum possible size as n, though not all slots may be used)
    float *below = (float *)malloc(n * sizeof(float));
    float *above = (float *)malloc(n * sizeof(float));
    if (below == NULL || above == NULL) {
        printf("Memory allocation failed.\n");
        free(arr);
        return 1;
    }

    int belowCount = 0, aboveCount = 0;

    // Separate the numbers into below[] or above[] based on the average
    for (i = 0; i < n; i++) {
        if (arr[i] < average) {
            below[belowCount++] = arr[i];
        } else if (arr[i] > average) {
            above[aboveCount++] = arr[i];
        }
        // If you want to handle arr[i] == average, you can add an else case here
    }

    // Print numbers below average
    printf("\nNumbers below average:\n");
    if (belowCount == 0) {
        printf("None\n");
    } else {
        for (i = 0; i < belowCount; i++) {
            printf("%.2f ", below[i]);
        }
        printf("\n");
    }

    // Print numbers above average
    printf("\nNumbers above average:\n");
    if (aboveCount == 0) {
        printf("None\n");
    } else {
        for (i = 0; i < aboveCount; i++) {
            printf("%.2f ", above[i]);
        }
        printf("\n");
    }

    // Free allocated memory
    free(arr);
    free(below);
    free(above);

    return 0;
}


