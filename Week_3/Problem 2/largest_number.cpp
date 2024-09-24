#include <iostream>

using namespace std;

int main() {
    float num1, num2, num3;                                         // Declare variables for three numbers

    cout << "Input first number: ";                                 // Input first number
    cin >> num1;
    
    cout << "Input second number: ";                                // Input second number
    cin >> num2;
    
    cout << "Input third number: ";                                 // Input third number
    cin >> num3;
    
    float largest = num1;                                           // Assume num1 is the largest initially
    if (num2 > largest) {                                           // Check if num2 is larger
        largest = num2;                                             // If yes, num2 is largest
    } 
    
    if (num3 > largest) {                                           // Check if num3 is larger than the current largest
        largest = num3;                                             // If yes, num2 is largest
    }

    cout << "The largest number is: " << largest << endl;           // Print the largest number after all checks

    return 0;
}
