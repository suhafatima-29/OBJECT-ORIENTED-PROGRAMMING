#include <iostream>
using namespace std;

class Number {
    int x;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> x;
    }

    bool operator == (Number obj) {
        return x == obj.x;
    }

    bool operator != (Number obj) {
        return x != obj.x;
    }

    bool operator > (Number obj) {
        return x > obj.x;
    }

    bool operator < (Number obj) {
        return x < obj.x;
    }

    bool operator >= (Number obj) {
        return x >= obj.x;
    }

    bool operator <= (Number obj) {
        return x <= obj.x;
    }
};

int main() {
    Number n1, n2;

    cout << "Enter value for first object:\n";
    n1.getData();

    cout << "\nEnter value for second object:\n";
    n2.getData();

    cout << "\n--- Relational Operator Results ---\n";

    cout << "n1 == n2 : " << (n1 == n2) << endl;
    cout << "n1 != n2 : " << (n1 != n2) << endl;
    cout << "n1 >  n2 : " << (n1 > n2)  << endl;
    cout << "n1 <  n2 : " << (n1 < n2)  << endl;
    cout << "n1 >= n2 : " << (n1 >= n2) << endl;
    cout << "n1 <= n2 : " << (n1 <= n2) << endl;

    return 0;
}

