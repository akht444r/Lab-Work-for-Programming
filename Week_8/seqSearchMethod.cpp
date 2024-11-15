#include <iostream>
#include <string>
using namespace std;

struct Student {
    string NISN;
    string Nama;
    int Value;
};

int main() {
    const int SIZE = 7;
    Student students[SIZE] = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };

    for (int i = 0; i < SIZE; i++) {
        if (students[i].Value == 60) {
            students[i].Nama = "Joko";
        }
    }

    cout << "NISN\t\tNama\t\t\t\t\tValue" << endl;
    cout << "--------------------------------------------------------------" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << students[i].NISN << "\t" << students[i].Nama << "\t\t\t\t" << students[i].Value << endl;
    }

    return 0;
}
