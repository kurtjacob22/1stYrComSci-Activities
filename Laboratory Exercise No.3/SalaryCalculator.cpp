#include <iostream>
using namespace std;

int main() {

    string employeeName;
    int workHrs, payRate, salary;

    cout << "Enter Employee name :";
    cin >> employeeName;

    cout << "Enter your pay rate: ";
    cin >> payRate;

    cout << "Enter work hours: ";
    cin >> workHrs;

    salary = payRate * workHrs;

    cout << "\nHello! " << employeeName << "\nYour salary is: " << salary;
    return 0;


}


