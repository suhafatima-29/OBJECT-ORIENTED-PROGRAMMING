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
        cout << "Value = " << x << endl;
    }

    Number operator = (Number obj) {
        x = obj.x;
        return *this;
    }

    Number operator += (Number obj) {
        x = x + obj.x;
        return *this;
    }

    Number operator -= (Number obj) {
        x = x - obj.x;
        return *this;
    }

    Number operator *= (Number obj) {
        x = x * obj.x;
        return *this;
    }

    Number operator /= (Number obj) {
        x = x / obj.x;
        return *this;
    }
};

int main() {
    Number n1, n2, result;

    cout << "Enter first object:\n";
    n1.getData();

    cout << "\nEnter second object:\n";
    n2.getData();

    cout << "\n--- Assignment Operator Results ---\n";

    result = n1;    
    cout << "After result = n1: ";
    result.display();

    result += n2;    
    cout << "After result += n2: ";
    result.display();

    result -= n2;    
    cout << "After result -= n2: ";
    result.display();

    result *= n2;    
    cout << "After result *= n2: ";
    result.display();

    result /= n2; 
    cout << "After result /= n2: ";
    result.display();

    return 0;
}

