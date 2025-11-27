#include <iostream>
using namespace std;

class Count {
    int value;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> value;
    }

    Count operator ++ (int) {
        Count temp;
        temp.value = value++;  
        return temp;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Count c1, result;

    c1.getData();

    result = c1++;

    cout << "\nAfter Postfix Increment (c++): ";
    result.display();

    cout << "Final Value in Object: ";
    c1.display();

    return 0;
}

