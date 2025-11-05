#include <iostream>
using namespace std;

int main() {
    int num, reversed;

    do {
        cout << "Enter a positive integer (0 to stop): ";
        cin >> num;

        if (num < 0) 
		{
            cout << "Please enter a positive number only." << endl;
            continue; 
        }

        if (num == 0) {
            cout << "Program terminated." << endl;
            break;
        }

        reversed = 0;
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        cout << "Reversed number: " << reversed << endl;

    } while (true);

    return 0;
}

