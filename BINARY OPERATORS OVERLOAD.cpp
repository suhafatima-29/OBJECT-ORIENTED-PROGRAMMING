#include <iostream>
using namespace std;

class Number {
    float x;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> x;
    }

    Number operator + (Number obj) {
        Number temp;
        temp.x = x + obj.x;
        return temp;
    }

    Number operator - (Number obj) {
        Number temp;
        temp.x = x - obj.x;
        return temp;
    }

    Number operator * (Number obj) {
        Number temp;
        temp.x = x * obj.x;
        return temp;
    }

    Number operator / (Number obj) {
        Number temp;
        temp.x = x / obj.x;  // no zero check for simplicity
        return temp;
    }

    bool operator == (Number obj) {
        return x == obj.x;
    }

    void display() {
        cout << x << endl;
    }
};

int main() {
    Number n1, n2, result;

    cout << "Enter first object value:\n";
    n1.getData();

    cout << "\nEnter second object value:\n";
    n2.getData();

    cout << "\n--- Binary Operations Result ---\n";

    result = n1 + n2;
    cout << "Addition (n1 + n2) = ";
    result.display();

    result = n1 - n2;
    cout << "Subtraction (n1 - n2) = ";
    result.display();

    result = n1 * n2;
    cout << "Multiplication (n1 * n2) = ";
    result.display();

    result = n1 / n2;
    cout << "Division (n1 / n2) = ";
    result.display();

    if (n1 == n2)
        cout << "\nBoth objects are equal.\n";
    else
        cout << "\nObjects are NOT equal.\n";

    return 0;
}

