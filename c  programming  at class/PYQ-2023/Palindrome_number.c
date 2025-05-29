#include <stdio.h>

int checkPalindrome(int num) {
    int original = num, reversed = 0, remainder;
    
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return (original == reversed);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Negative numbers are not palindromes.\n");
    } else if (checkPalindrome(num)) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    
    return 0;
}
