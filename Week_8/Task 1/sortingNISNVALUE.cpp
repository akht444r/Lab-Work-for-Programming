#include <iostream>
#include <string>
using namespace std;

struct Student {
    long NISN;
    string name;
    int value;
};

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

void insertionSortByNISN() {
    int i, j, temp, dataSize = SIZE;
    for (j = 1; j < dataSize; j++) {
        i = j - 1;
        Student temp = students[j];
        while (i >= 0 && students[i].NISN > temp.NISN) {
            students[i + 1] = students[i];
            i--;
        }
        students[i + 1] = temp;
    }
}

void selectionSortByValue() {
    int i, j, temp, min, dataSize = SIZE;
    for (i = 0; i < dataSize - 1; i++) {
        min = i;
        for (j = i + 1; j < dataSize; j++) {
            if (students[j].value > students[min].value) {
                min = j;
            }
        }
        Student temp = students[i];
        students[i] = students[min];
        students[min] = temp;
    }
}

void bubbleSortByNISN() {
    int i, j, temp, dataSize = SIZE;
    for (i = 0; i < dataSize - 1; i++) {
        for (j = 0; j < dataSize - i - 1; j++) {
            if (students[j].NISN < students[j + 1].NISN) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void displayStudents() {
    cout << "NISN\t\tName\t\t\t\tValue" << endl;
    cout << "-------------------------------------------------" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << students[i].NISN << "\t" << students[i].name << "\t\t\t" << students[i].value << endl;
    }
    cout << endl;
}

int main() {
    cout << "Given Data:" << endl;
    displayStudents();

    insertionSortByNISN();
    cout << "Sorted by NISN using descending Insertion Sort:" << endl;
    displayStudents();

    selectionSortByValue();
    cout << "Sorted by Value using descending Selection Sort:" << endl;
    displayStudents();

    bubbleSortByNISN();
    cout << "Sorted by NISN using descending Bubble Sort:" << endl;
    displayStudents();

    return 0;
}
