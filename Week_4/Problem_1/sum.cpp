#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num, sum = 0;               //Declare variables for number and sum
    int i;                          //Declare variable for i
    cout << "Input: ";              //Ask user for input
    cin >> num;                     
    for (i=1; i<=num; i++){         //Set the starting number, limit of i
        sum+=i;                     //Add for every numbers
    }
    cout << "Numbers: ";            //Show numbers in the range of num
    for (i=1; i<=num; i++){
        cout << i << " + ";         //Show numbers and '+' symbol
    }
    cout << endl;
cout << "Result: " << sum << endl;; //Show sum result

 return 0;
}
