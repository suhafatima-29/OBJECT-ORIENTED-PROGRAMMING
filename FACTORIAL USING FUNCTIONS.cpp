#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = factorial(num);

    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}

