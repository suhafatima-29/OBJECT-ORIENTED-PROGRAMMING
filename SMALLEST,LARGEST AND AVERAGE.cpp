#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of values (N): ";
    cin >> N;

    if (N <= 0) {
        cout << "Invalid input. N must be greater than 0." << endl;
        return 0;
    }

    double number, sum = 0;
    double smallest, largest;

    cout << "Enter value 1: ";
    cin >> number;
    smallest = largest = sum = number;

    for (int i = 2; i <= N; i++) {
        cout << "Enter value " << i << ": ";
        cin >> number;

        sum += number;

        if (number < smallest) {
            smallest = number;
        }
        if (number > largest) {
            largest = number;
        }
    }

    double average = sum / N;

    cout << "\nSmallest value: " << smallest << endl;
    cout << "Largest value: " << largest << endl;
    cout << "Average value: " << average << endl;

    return 0;
}

