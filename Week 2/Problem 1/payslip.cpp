#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(){
    
    cout << "Payslip for Employee" << endl;                                 //Header payslip
    cout << "------------------------" << endl;
    
        string Name;
    cout << "Name: ";                                                       //Input employee's name
    getline(cin, Name);
    
    float Gross;
    cout << "Gross Salary: " << "IDR.";                                      //Input gross salary
    cin >> Gross;
    
    float Tax = (0.28)*Gross;
    cout << fixed << setprecision(2) << "Tax: " << "IDR." << Tax << endl;    //28% tax calculation
    
    float Installment;
    cout << "Installment: " << "IDR.";                                       //Input installment cost
    cin >> Installment;
    
    float Insurance;
    cout << "Insurance: " << "IDR.";                                         //Input insurance cost
    cin >> Insurance;
    
    float Net = Gross - Tax - Installment - Insurance;
    cout << fixed << setprecision(2) << "Net Salary: " << "IDR." << Net;     //Display net salary
    
}
