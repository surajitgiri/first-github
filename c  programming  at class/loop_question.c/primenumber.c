#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // User input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime check logic
    if (num < 2) {
        isPrime = 0; // Numbers less than 2 are not prime
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Number is divisible, so it's not prime
                break;
            }
        }
    }

    // Print result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
