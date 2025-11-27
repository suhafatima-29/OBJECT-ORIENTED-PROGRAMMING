#include <iostream>
using namespace std;

class Number {
    int x;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> x;
    }

    void display() {
        cout << x << endl;
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
        temp.x = x / obj.x;    
        return temp;
    }

    Number operator % (Number obj) {
        Number temp;
        temp.x = x % obj.x;   
        return temp;
    }
};

int main() {
    Number n1, n2, result;

    cout << "Enter first number:\n";
    n1.getData();

    cout << "\nEnter second number:\n";
    n2.getData();

    cout << "\n--- Arithmetic Operations ---\n";

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

    result = n1 % n2;
    cout << "Modulus (n1 % n2) = ";
    result.display();

    return 0;
}

