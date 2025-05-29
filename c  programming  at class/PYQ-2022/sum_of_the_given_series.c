#include <stdio.h>
#include <math.h>

// Function to calculate the sum of the series
double calculateSeriesSum(double x, int n) {
    double sum = 0.0;
    int sign = 1; // Alternating sign

    for (int i = 1; i <= n; i += 2) {
        sum += sign * pow(x, i);
        sign = -sign; // Toggle sign for next term
    }
    return sum;
}

int main() {
    double x;
    int n;
    
    // Taking input from user
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the maximum exponent n (odd number): ");
    scanf("%d", &n);
    
    // Validating input
    if (n < 1 || n % 2 == 0) {
        printf("Error: n must be a positive odd integer.\n");
        return 1;
    }
    
    // Compute and display the sum
    double sum = calculateSeriesSum(x, n);
    printf("Sum of the series: %.6lf\n", sum);
    
    return 0;
}