#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    virtual float calculateSalary() = 0;   // Virtual function
    virtual ~Employee() {}                 // Virtual destructor
};

// Derived class: Full-Time Employee
class FullTimeEmployee : public Employee {
    float basic, hra, da;
public:
    FullTimeEmployee(float b, float h, float d) {
        basic = b;
        hra = h;
        da = d;
    }

    float calculateSalary() {
        return basic + hra + da;
    }
};

// Derived class: Part-Time Employee
class PartTimeEmployee : public Employee {
    int hoursWorked;
    float ratePerHour;
public:
    PartTimeEmployee(int h, float r) {
        hoursWorked = h;
        ratePerHour = r;
    }

    float calculateSalary() {
        return hoursWorked * ratePerHour;
    }
};

// Derived class: Intern
class Intern : public Employee {
    float stipend;
public:
    Intern(float s) {
        stipend = s;
    }

    float calculateSalary() {
        return stipend;
    }
};

int main() {
    Employee* emp;
    int choice;

    cout << "Select Employee Type:\n";
    cout << "1. Full-Time Employee\n";
    cout << "2. Part-Time Employee\n";
    cout << "3. Intern\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        float b, h, d;
        cout << "Enter Basic, HRA, DA: ";
        cin >> b >> h >> d;
        emp = new FullTimeEmployee(b, h, d);
    }
    else if (choice == 2) {
        int hrs;
        float rate;
        cout << "Enter hours worked and rate per hour: ";
        cin >> hrs >> rate;
        emp = new PartTimeEmployee(hrs, rate);
    }
    else if (choice == 3) {
        float s;
        cout << "Enter stipend: ";
        cin >> s;
        emp = new Intern(s);
    }
    else {
        cout << "Invalid choice!";
        return 0;
    }

    cout << "Calculated Salary = " << emp->calculateSalary() << endl;

    delete emp;   // Free memory
    return 0;
}

