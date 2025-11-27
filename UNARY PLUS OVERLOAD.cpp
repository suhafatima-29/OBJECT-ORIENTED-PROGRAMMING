#include <iostream>
using namespace std;

class Number {
    int x;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> x;
}

    Number operator + () {
        Number temp;
        temp.x = +x;   
        return temp;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Number n1, result;

    n1.getData();     
    result = +n1;     

    cout << "\nAfter Unary Plus (+obj): ";
    result.display();

    return 0;
}

