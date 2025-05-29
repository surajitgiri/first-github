#include <iostream>
#include <cmath>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(long long binary)
{
    int decimal = 0, i = 0;
    while (binary != 0)
    {
        int digit = binary % 10; // Extract last digit
        decimal += digit * pow(2, i); // Convert to decimal
        binary /= 10; // Remove last digit
        i++;
    }
    return decimal;
}

int main()
{
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    
    int decimal = binaryToDecimal(binary);
    cout << "Decimal equivalent: " << decimal << endl;
    
    return 0;
}
