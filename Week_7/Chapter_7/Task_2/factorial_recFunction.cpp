#include <iostream>
using namespace std;

int factorial(int x) {
    if (x <= 1) {
        return 1;
    }
    return x * factorial(x - 1);
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << x << "! = " << factorial(x) << endl;

    return 0;
}
