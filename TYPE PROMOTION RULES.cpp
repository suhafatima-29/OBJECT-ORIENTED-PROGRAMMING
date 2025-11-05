#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter an arithmetic expression (e.g., 5 + 3.2): ";
    getline(cin, input);

    stringstream ss(input);
    string op1_str, op2_str, oper;
    ss >> op1_str >> oper >> op2_str;

    double operand1, operand2;
    
    stringstream ss1(op1_str);
    ss1 >> operand1;

    stringstream ss2(op2_str);
    ss2 >> operand2;

    double result;

    if (oper == "+")
        result = operand1 + operand2;
    else if (oper == "-")
        result = operand1 - operand2;
    else if (oper == "*")
        result = operand1 * operand2;
    else if (oper == "/") {
        if (operand2 != 0)
            result = operand1 / operand2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 1;
        }
    } else {
        cout << "Error: Invalid operator!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}

