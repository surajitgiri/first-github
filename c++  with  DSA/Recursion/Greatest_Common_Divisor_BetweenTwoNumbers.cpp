// #include <iostream>
// using namespace std;

// // Function to calculate GCD using Euclidean Algorithm
// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;  // Remainder when a is divided by b
//         a = temp;   // Update a to be b
//     }
//     return a;  // When b becomes 0, a contains the GCD
// }

// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;

//     // Find and display the GCD
//     cout <<  gcd(num1, num2) << endl;

//     return 0;
// }



// using recursion
#include <iostream>
using namespace std;

// Function to calculate GCD using Euclidean Algorithm
int gcd(int a, int b) {
    if(b==0){
        return a;
    }

    return gcd(b,a%b);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    // Find and display the GCD
    cout <<  gcd(num1, num2) << endl;

    return 0;
}

