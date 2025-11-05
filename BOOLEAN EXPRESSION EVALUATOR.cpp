#include <iostream>
#include <string>
using namespace std;

bool getBooleanInput(string prompt) {
    string input;
    cout << prompt;
    cin >> input;
    if (input == "1" || input == "true" || input == "True")
        return true;
    else if (input == "0" || input == "false" || input == "False")
        return false;
    else {
        cout << "Invalid input! Assuming false.\n";
        return false;
    }
}

int main() {
    cout << "Boolean Expression Evaluator\n";
    bool A = getBooleanInput("Enter first Boolean (0/1 or true/false): ");
    bool B = getBooleanInput("Enter second Boolean (0/1 or true/false): ");

    cout << "AND: " << (A && B) << endl;
    cout << "OR : " << (A || B) << endl;
    cout << "XOR: " << (A != B) << endl;
    cout << "NOT A: " << (!A) << endl;
    cout << "NOT B: " << (!B) << endl;

    return 0;
}

