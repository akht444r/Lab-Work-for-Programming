#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Student {                                                                    // Struct is needed because it stores NISN, NAME, VALUE
    long NISN;
    string name;
    int value;
};

int main() {
    bool found = false;
    const int SIZE = 7;
    Student students[SIZE] = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };

    long query = 9950310962;                                                        // The NISN we wished to find
    
    sort(students, students + SIZE, [](const Student& a, const Student& b) {
        return a.NISN < b.NISN;
    });

    int i = 0, j = SIZE - 1, k;
    while (!found && i <= j) {
        k = (i + j) / 2;
        if (students[k].NISN < query) {
            i = k + 1;
        } else if (students[k].NISN == query) {
            found = true;
        } else {
            j = k - 1;
        }
    }

    if (!found) {
        cout << "Student with NISN " << query << " is not found." << endl;
    } else {
        cout << "Student with NISN " << query << " is found." << endl;
    }

    return 0;
}
