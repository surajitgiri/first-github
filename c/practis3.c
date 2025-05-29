#include <stdio.h>

void convertToBinary(int num) {
    int binary[8]; // To store binary digits (max 8 bits for 2-digit numbers)
    int i = 0;
    
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    // Print binary in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int rollNumber;
    printf("Enter your roll number: ");
    scanf("%d", &rollNumber);
    
    int lastTwoDigits = rollNumber % 100; // Extract last 2 digits
    printf("Last two digits: %d\n", lastTwoDigits);
    
    convertToBinary(lastTwoDigits);
    
    return 0;
}
