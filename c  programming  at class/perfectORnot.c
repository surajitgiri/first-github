#include <stdio.h>

int main() {
    int num, sum = 0, i;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the sum of proper divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the number is perfect
    if (sum == num && num > 0) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is NOT a Perfect Number.\n", num);
    }

    return 0;
}
