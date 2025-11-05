#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    if (!(cin >> year)) 
	{ 
        cout << "Invalid input. Please enter a numeric value." << endl;
        return 1;
    }

    if (year <= 0) {
        cout << "Invalid year. Year must be greater than 0." << endl;
    }
    else {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            cout << year << " is a leap year." << endl;
        else
            cout << year << " is not a leap year." << endl;
    }

    return 0;
}

