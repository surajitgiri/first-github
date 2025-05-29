#include <stdio.h>
#include <math.h>

// Function to evaluate f(x) = x^3 + 3x + 1
double f(double x) {
    return pow(x, 3) + 3*x + 1;
}

// Function to evaluate integral using Simpson's 1/3rd Rule
double simpsons_rule(double a, double b, double h) {
    int n = (b - a) / h;
    if (n % 2 != 0) { // Ensure n is even
        n++;
        h = (b - a) / n;
    }
    
    double sum = f(a) + f(b);
    
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0)
            sum += 2 * f(x);
        else
            sum += 4 * f(x);
    }
    
    return (h / 3) * sum;
}

int main() {
    double a, b, h;
    printf("Enter the values of a, b, and h: ");
    scanf("%lf %lf %lf", &a, &b, &h);
    
    double result = simpsons_rule(a, b, h);
    printf("The integral result is: %lf\n", result);
    
    return 0;
}