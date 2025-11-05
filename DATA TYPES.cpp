#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

void checkIntOverflow(long long result) {
    if (result > numeric_limits<int>::max())
        cout << "Warning: Integer Overflow occurred!\n";
    else if (result < numeric_limits<int>::min())
        cout << "Warning: Integer Underflow occurred!\n";
}

void checkFloatOverflow(double result) {
    if (result > numeric_limits<float>::max())
        cout << "Warning: Float Overflow occurred!\n";
    else if (result < -numeric_limits<float>::max())
        cout << "Warning: Float Underflow occurred!\n";
    else if (fabs(result) < numeric_limits<float>::min() && result != 0)
        cout << "Warning: Float Underflow (too small to represent accurately)!\n";
}

int main() {
    int type;
    cout << "Select Data Type:\n";
    cout << "1. int\n2. float\n3. double\n";
    cin >> type;

    cout << "Enter first operand: ";
    double a;
    cin >> a;

    cout << "Enter second operand: ";
    double b;
    cin >> b;

    char op;
    cout << "Enter operation (+, -, *, /, %): ";
    cin >> op;

    cout << "\nResult: ";

    switch (type) {
        case 1: {  // Integer
            int x = static_cast<int>(a);
            int y = static_cast<int>(b);
            long long result = 0;

            switch (op) {
                case '+': result = (long long)x + y; break;
                case '-': result = (long long)x - y; break;
                case '*': result = (long long)x * y; break;
                case '/':
                    if (y == 0) { cout << "Error: Division by zero!\n"; return 0; }
                    result = x / y;
                    break;
                case '%':
                    if (y == 0) { cout << "Error: Modulus by zero!\n"; return 0; }
                    result = x % y;
                    break;
                default: cout << "Invalid operator!\n"; return 0;
            }

            checkIntOverflow(result);
            cout << (int)result << endl;
            break;
        }

        case 2: {  // Float
            float x = (float)a, y = (float)b;
            double result = 0.0;

            switch (op) {
                case '+': result = x + y; break;
                case '-': result = x - y; break;
                case '*': result = x * y; break;
                case '/':
                    if (y == 0) { cout << "Error: Division by zero!\n"; return 0; }
                    result = x / y;
                    break;
                case '%':
                    cout << "Error: Modulus not supported for float!\n"; return 0;
                default: cout << "Invalid operator!\n"; return 0;
            }

            checkFloatOverflow(result);
            cout << (float)result << endl;
            break;
        }

        case 3: {  //Double
            double x = a, y = b, result = 0.0;

            switch (op) {
                case '+': result = x + y; break;
                case '-': result = x - y; break;
                case '*': result = x * y; break;
                case '/':
                    if (y == 0) { cout << "Error: Division by zero!\n"; return 0; }
                    result = x / y;
                    break;
                case '%':
                    cout << "Error: Modulus not supported for double!\n"; return 0;
                default: cout << "Invalid operator!\n"; return 0;
            }

            cout << result << endl;
            break;
        }

        default:
            cout << "Invalid data type selected!\n";
    }

    return 0;
}

