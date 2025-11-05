#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int numEmployees;

    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    if (numEmployees <= 0) {
        cout << "Invalid input. Number of employees must be positive." << endl;
        return 1;
    }

    double totalPayroll = 0; 
    int empID;
    double wageRate, hoursWorked;

    cout << fixed << setprecision(2); 

    for (int i = 0; i < numEmployees; i++) {
        cout << "\nEnter details for employee #" << i + 1 << ":\n";
        cout << "Employee ID: ";
        cin >> empID;
        cout << "Hourly wage rate: ";
        cin >> wageRate;
        cout << "Hours worked this week: ";
        cin >> hoursWorked;

        double grossPay;
        if (hoursWorked > 40) {
            double overtimeHours = hoursWorked - 40;
            grossPay = 40 * wageRate + overtimeHours * wageRate * 1.5;
        } else {
            grossPay = hoursWorked * wageRate;
        }

        double netPay = grossPay * (1 - 0.03625);

        cout << "Employee #" << empID << " - Net Pay: $" << netPay << endl;

        totalPayroll += netPay;
    }

    double averagePay = totalPayroll / numEmployees;

    cout << "\nTotal payroll: $" << totalPayroll << endl;
    cout << "Average pay: $" << averagePay << endl;

    return 0;
}

