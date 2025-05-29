#include <stdio.h>
#include <limits.h>

int main() {
    FILE *file;
    int num;
    int max = INT_MIN, min = INT_MAX;

    // Open the file in read mode
    file = fopen("numbers.txt", "r");
    
    // Check if the file exists
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read numbers and find min and max
    while (fscanf(file, "%d", &num) != EOF) {
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }

    // Close the file
    fclose(file);

    // Display the results
    printf("Maximum Value: %d\n", max);
    printf("Minimum Value: %d\n", min);

    return 0;
}
