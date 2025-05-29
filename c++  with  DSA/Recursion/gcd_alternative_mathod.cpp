#include <iostream>
using namespace std;

// Function to find the GCD using the common divisors method
int findGCD(int a, int b) {
    int gcd = 1;  // Start with 1, because 1 is always a divisor of both numbers

    // Iterate through all numbers from 1 to the smaller of a or b
    for (int i = 1; i <= a && i <= b; i++) {
        // If i divides both a and b, update gcd
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Find and display the GCD
    int result = findGCD(num1, num2);
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
