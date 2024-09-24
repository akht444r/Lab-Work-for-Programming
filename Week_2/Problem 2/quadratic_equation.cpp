#include <iostream>
#include <cmath>

using namespace std;

int main()  // Main function where the program starts execution
{
    int a, b, c;                                                          // Declaration of integer variables a, b, c
    float D;                                                              // Declaration of float variable D
    float x, x1, x2;                                                      // Declaration of float variables x, x1, x2 
    
    // Getting input from the user for coefficients of the quadratic equation (ax^2 + bx + c = 0)
    cout << "a: "; 
    cin >> a;                                                             // User inputs value for 'a'
    
    cout << "b: "; 
    cin >> b;                                                             // User inputs value for 'b'
    
    cout << "c: "; 
    cin >> c;                                                             // User inputs value for 'c'
    
    // Calculating the discriminant (D = b^2 - 4ac)
    D = b * b - (4 * a * c);
    cout << "Discriminant: " << D << endl;                                // Display the value of the discriminant
    
    // Checking the discriminant to determine the nature of the roots
    if (D > 0) {                                                          // If discriminant is positive, the roots are real and distinct
        // Calculate the two real and distinct roots using the quadratic formula
        x1 = (-b + sqrt(D)) / (2 * a);  // First root
        x2 = (-b - sqrt(D)) / (2 * a);  // Second root
        cout << "x1: " << x1;  // Output the first root
        cout << " and x2: " << x2 << endl;  // Output the second root
        cout << "x1 and x2 are real and distinct";  // Inform the user the roots are real and distinct
    }
    
    else if (D == 0) {                                                    // If discriminant is zero, there is only one real root (repeated)
        x = -b / (2 * a);                                                 // Calculate the repeated root
        cout << "x: " << x;  // Output the single root
    }
    
    else {                                                                // If discriminant is negative, the roots are complex/imaginary
        cout << "imaginary root";  // Inform the user that the roots are imaginary
    }

    return 0;
}
