#include <stdio.h>

/* Function to compute the sum of the squares of the digits of 'n'. */
int sumOfSquaresOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

/* Function to check if 'n' is a happy number (with up to 100 iterations). */
int isHappy(int n) {
    for (int i = 0; i < 100; i++) {
        n = sumOfSquaresOfDigits(n);
        if (n == 1) {
            return 1;  // It's a happy number
        }
    }
    return 0;  // Not happy (if we didn't reach 1 within 100 iterations)
}

int main(void) {
    int count = 0;
    int number = 1;

    printf("The first 10 happy numbers are:\n");
    while (count < 10) {
        if (isHappy(number)) {
            printf("%d ", number);
            count++;
        }
        number++;
    }
    printf("\n");
    return 0;
}
