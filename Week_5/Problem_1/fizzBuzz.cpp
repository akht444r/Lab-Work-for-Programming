#include <iostream>
#include <vector>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> result(n);

    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0)
            result[i-1] = "FizzBuzz";
        else if (i % 3 == 0)
            result[i-1] = "Fizz";
        else if (i % 5 == 0)
            result[i-1] = "Buzz";
        else
            result[i-1] = to_string(i);
    }

    return result;
}

int main() {
    vector<string> result = fizzBuzz(100);
    for (const string& s : result) {
        cout << s << " ";
    }
    return 0;
}
