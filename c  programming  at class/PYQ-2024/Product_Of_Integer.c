#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasNonZero = 0; // Flag to check if there are nonzero digits
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Handling negative numbers
    if (num < 0) {
        num = -num;
    }
    
    while (num > 0) {
        digit = num % 10; // Extract the last digit
        if (digit != 0) {
            product *= digit;
            hasNonZero = 1; // Set flag if there's a nonzero digit
        }
        num /= 10; // Remove the last digit
    }
    
    if (hasNonZero) {
        printf("Product of nonzero digits: %d\n", product);
    } else {
        printf("Product is 0 because there are no nonzero digits.\n");
    }
    
    return 0;
}