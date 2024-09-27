#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseVector(const vector<int>& input) {
    vector<int> reversed;

    for (int i = input.size() - 1; i >= 0; --i) {
        reversed.push_back(input[i]);
    }

    return reversed;
}

int main() {
    int n;
    cout << "How many numbers you wish to reverse: ";
    cin >> n;

    vector<int> vec(n);
    
    cout << "Enter numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];  // User inputs the numbers
    }

    vector<int> reversedVec = reverseVector(vec);

    cout << "Reversed vector: ";
    for (int num : reversedVec) {
        cout << num << " ";
    }

    return 0;
}
