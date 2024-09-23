#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;                                                //Declare variables for number 1, 2, and 3

    cout << "Input number 1: ";                                          //Ask user for number
    cin >> num1;                                                         //User input random number

    cout << "Input number 2: ";                                          //Ask user for number
    cin >> num2;                                                         //User input random number

    cout << "Input number 3: ";                                          //Ask user for number
    cin >> num3;                                                         //User input random number
    
    if (int largest = num1) {                                            // Initialize 'largest' with the value of 'num1' and check if 'num1' is the largest number
    cout << "The largest number is " << largest << endl;                 // Print the largest number if 'num1' is the largest
}

else if (num2 > largest) {                                               // Check if 'num2' is greater than the current 'largest'
    largest = num2;                                                      // If true, assign 'num2' as the largest
}

else if (num3 > largest) {                                               // Check if 'num3' is greater than the current 'largest'
    largest = num3;                                                      // If true, assign 'num3' as the largest
}

cout << "The largest number is: " << largest << endl;                    // Print the largest number after all checks

return 0; 
