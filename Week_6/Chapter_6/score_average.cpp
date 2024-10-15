#include <iostream>

using namespace std;

struct StudentScore {
    int StudId;
    float uas;
    float uts;
};
StudentScore theStudent[50];

int main(){
    int N;
    cout << "Enter the number of student(s): "; cin >> N;
    cout << endl;
    
    if (N==1){
     cout << "Enter student data below: " << endl;
     cout << "Enter student's ID: "; cin >> theStudent[1].StudId;
     cout << "Enter midterm score: "; cin >> theStudent[1].uts;
     cout << "Enter finalterm score: "; cin >> theStudent[1].uas;
     
    cout << "-----Student's average-----" << endl;
    cout << "Student ID: " << theStudent[1].StudId << endl;
    cout << "Average: " << 0.5*(theStudent[1].uts+theStudent[1].uas);
    }
    
    else {
        cout << "Enter students data below: " << endl;
        for (int i=0; i<N; i++){
            cout << "Enter students' ID: "; cin >> theStudent[i].StudId;
            cout << "Enter midterm score: "; cin >> theStudent[i].uts;
            cout << "Enter finalterm score: "; cin >> theStudent[i].uas;
            cout << endl;
        }
        cout << "-----Students' averages-----" << endl;
        for (int i=0; i<N; i++){
                cout << "Student ID: " << theStudent[i].StudId << endl;
                cout << "Average: " << 0.5*(theStudent[i].uts+theStudent[i].uas) << endl;
                cout << endl;
            }
    }
}
