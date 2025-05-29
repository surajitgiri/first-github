#include <stdio.h>

// Function to find the GCD of two numbers
int findGCD(int a, int b) {
    if(b==0) return a;
     return   findGCD(b,a%b);
}

// Function to find the LCM of two numbers
int findLCM(int a, int b) {
    int gcd = findGCD(a, b);
    return (a * b) / gcd;
}

int main() {
    int num1, num2, lcm;

    // Ask the user to input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    lcm = findLCM(num1, num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
