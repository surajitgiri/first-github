#include <stdio.h>

void deleteElement(int arr[], int *size, int pos) {
    if (pos < 0 || pos >= *size) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--; // Decrease size of array
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos;

    printf("Original array: ");
    displayArray(arr, size);

    printf("Enter position to delete (0-based index): ");
    scanf("%d", &pos);

    deleteElement(arr, &size, pos);

    printf("Array after deletion: ");
    displayArray(arr, size);

    return 0;
}
