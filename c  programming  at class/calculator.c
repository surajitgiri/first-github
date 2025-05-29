#include <stdio.h>

// Function to perform addition
float add(float a, float b) {
    return a + b;
}

// Function to perform subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function to perform multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function to perform division
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}

int main() {
    int choice;
    float num1, num2, result;

    // Displaying menu
    printf("Simple Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");

    // Taking user input for choice
    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        // If the user selects Exit, break the loop
        if (choice == 5) {
            break;
        }

        // Taking user input for numbers
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        // Performing operation based on the choice
        switch(choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                result = divide(num1, num2);
                if (num2 != 0) {
                    printf("Result: %.2f\n", result);
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    printf("Exiting the program...\n");
    return 0;
}
