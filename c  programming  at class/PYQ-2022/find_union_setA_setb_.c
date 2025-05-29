#include <stdio.h>
#include <stdlib.h>

// Function to check if an element exists in the array
int is_present(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1; // Element found
        }
    }
    return 0; // Element not found
}

// Function to find the union of two sets
void union_sets(int A[], int sizeA, int B[], int sizeB) {
    int unionSet[sizeA + sizeB]; // Maximum possible size
    int index = 0;

    // Add all elements from A
    for (int i = 0; i < sizeA; i++) {
        unionSet[index++] = A[i];
    }

    // Add elements from B only if they are not already in unionSet
    for (int i = 0; i < sizeB; i++) {
        if (!is_present(A, sizeA, B[i])) {
            unionSet[index++] = B[i];
        }
    }

    // Print the union set
    printf("Union of A and B: { ");
    for (int i = 0; i < index; i++) {
        printf("%d ", unionSet[i]);
    }
    printf("}\n");
}

int main() {
    int sizeA, sizeB;

    // Input size of first set
    printf("Enter the number of elements in set A: ");
    scanf("%d", &sizeA);
    int A[sizeA];

    // Input elements of first set
    printf("Enter %d elements for set A: ", sizeA);
    for (int i = 0; i < sizeA; i++) {
        scanf("%d", &A[i]);
    }

    // Input size of second set
    printf("Enter the number of elements in set B: ");
    scanf("%d", &sizeB);
    int B[sizeB];

    // Input elements of second set
    printf("Enter %d elements for set B: ", sizeB);
    for (int i = 0; i < sizeB; i++) {
        scanf("%d", &B[i]);
    }

    // Call function to compute and display union
    union_sets(A, sizeA, B, sizeB);

    return 0;
}
