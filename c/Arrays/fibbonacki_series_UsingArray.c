#include <stdio.h>

int main() {
    int n, i;

    // Get the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Declare an array to store Fibonacci numbers
    int fib[n];

    // First two Fibonacci numbers
    fib[0] = 0;
    fib[1] = 1;

    // Generate the Fibonacci sequence
    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the Fibonacci series
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }

    return 0;
}
