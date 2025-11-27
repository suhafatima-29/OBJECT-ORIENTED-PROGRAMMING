#include <iostream>
using namespace std;

class Number {
    int x;
public:
    void getData() {
        cout << "Enter a number: ";
        cin >> x;
    }

    Number operator - () {
        Number temp;
        temp.x = -x;    
        return temp;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Number n1, n2;

    n1.getData();   

    n2 = -n1;       

    cout << "\nAfter applying unary minus:\n";
    n2.display();

    return 0;
}

