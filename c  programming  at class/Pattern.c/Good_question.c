#include <stdio.h>

int main() {
    int n = 4;  // Number of rows
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }

        // Print increasing numbers
        for (int j = 2; j <= i; j++) {
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
