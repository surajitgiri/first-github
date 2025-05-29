#include <iostream>
using namespace std;

// Function to convert decimal to binary
int decimalToBinary(int decimal)
{
   int binary = 0;
    int remainder, i = 1;
    while (decimal != 0)
    {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

int main()
{
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    
   int binary = decimalToBinary(decimal);
    cout << "Binary equivalent: " << binary << endl;
    
    return 0;
}
