#include <iostream>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n < 0) return 0; 
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b; 
}

int main() {
    int choice;

    do {
     
        cout << "\nMenu:\n";
        cout << "1. Find factorial of a number\n";
        cout << "2. Find GCD of two numbers\n";
        cout << "3. Find LCM of two numbers\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
			{
                int n;
                cout << "Enter a non-negative number: ";
                cin >> n;
                if (n < 0) 
				{
                    cout << "Factorial not defined for negative numbers.\n";
                } else 
				{
                    cout << "Factorial of " << n << " is " << factorial(n) << endl;
                }
                break;
            }

            case 2: 
			{
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
                break;
            }

            case 3: 
			{
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "LCM of " << a << " and " << b << " is " << lcm(a, b) << endl;
                break;
            }

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice! Please select a valid option.\n";
        }

    } while (choice != 4);

    return 0;
}

