#include <iostream>
using namespace std;

int main() {
    int guests, chairs;
    long long arrangements = 1;  

    cout << "Enter the number of guests: ";
    cin >> guests;
    cout << "Enter the number of chairs: ";
    cin >> chairs;

    if (chairs > guests || chairs <= 0 || guests <= 0) {
        cout << "Invalid input. Number of chairs must be <= number of guests, and both must be positive." << endl;
        return 1;
    }

    for (int i = 0; i < chairs; i++) {
        arrangements *= (guests - i);  
    }

    cout << "Number of possible arrangements: " << arrangements << endl;

    return 0;
}

