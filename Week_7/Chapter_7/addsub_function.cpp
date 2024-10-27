#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int difference(int a, int b) {
    return a - b;
}

int main() {
    int choose, num1, num2;

    cout << "Choose an operation:\n1 for Addition\n2 for Difference" << endl;
    cin >> choose;

    if (choose == 1) {
        cout << "Enter first number: "; cin >> num1; 
        cout << "Enter sec number: "; cin >> num2;
        cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
    } else if (choose == 2) {
        cout << "Enter first number: "; cin >> num1; 
        cout << "Enter sec number: "; cin >> num2;
        cout << num1 << " - " << num2 << " = " << difference(num1, num2) << endl;
    } else {
        cout << "only addition and difference" << endl;
    }

    return 0;
}
