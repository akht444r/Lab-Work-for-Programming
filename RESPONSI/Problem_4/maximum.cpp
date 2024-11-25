#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3;
    cout << "Please input 3 numbers into the list: "; cin >> n1 >> n2 >> n3;
    
    float max = n1;
    if (n2>max && n2>n3){
        max = n2;
        cout << max << " or the 2nd number is the maximum." << endl;
    }
    else if (n3>n2 && n3>max){
        max = n3;
        cout << max << " or  the 3rd number is the maximum." << endl;
    }
    else{
        cout << max << " or the 1st number is the maximum." << endl;
    }
}
