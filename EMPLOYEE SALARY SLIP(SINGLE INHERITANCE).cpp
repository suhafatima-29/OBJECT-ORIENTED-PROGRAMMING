#include <iostream>
#include <iomanip>
using namespace std;

// Base Class
class Employee {
protected:
    string name;
    int empID;
    float basicPay;

public:
    void getEmployeeData() {
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Employee ID: ";
        cin >> empID;

        cout << "Enter Basic Pay: ";
        cin >> basicPay;
    }
};

// Derived Class
class Salary : public Employee {
private:
    float hra, da, pf, grossSalary, netSalary;

public:
    void calculateSalary() {
        hra = 0.20f * basicPay;      
        da  = 0.10f * basicPay;     
        pf  = 0.05f * basicPay;    

        grossSalary = basicPay + hra + da;
        netSalary   = grossSalary - pf;
    }

    void displaySalarySlip() {
        cout << "\n SALARY SLIP \n";
        cout << "Employee Name : " << name << endl;
        cout << "Employee ID   : " << empID << endl;
        cout << fixed << setprecision(2);
        cout << "Basic Pay     : Rs. " << basicPay << endl;
        cout << "HRA (20%)     : Rs. " << hra << endl;
        cout << "DA  (10%)     : Rs. " << da << endl;
        cout << "PF  (5%)      : Rs. " << pf << endl;
        cout << "---------------------------------" << endl;
        cout << "Gross Salary  : Rs. " << grossSalary << endl;
        cout << "Net Salary    : Rs. " << netSalary << endl;
        cout << "\n";
    }
};

int main() {
    Salary emp;

    emp.getEmployeeData();
    emp.calculateSalary();
    emp.displaySalarySlip();

    return 0;
}

