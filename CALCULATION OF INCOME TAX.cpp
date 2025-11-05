#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    double income, tax;

    cout << "Enter your annual income : ";
    if (!(cin >> income)) 
	{ 
        cout << "Invalid input. Please enter a numeric value." << endl;
        return 1;
    }

    if (income < 0) {
        cout << "Income cannot be negative." << endl;
    } 
    else {
        if (income <= 250000) {
            tax = 0;
        } 
        else if (income <= 500000) {
            tax = (income - 250000) * 0.05;
        } 
        else if (income <= 1000000) {
            tax = (250000 * 0.05) + (income - 500000) * 0.20;
        } 
        else {
            tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
        }

        cout << fixed << setprecision(2);
        cout << "Your calculated tax is: " << tax << endl;
    }

    return 0;
}

