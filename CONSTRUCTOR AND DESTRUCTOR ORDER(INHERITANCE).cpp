#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Class Constructor Called" << endl;
    }

    ~Base() {
        cout << "Base Class Destructor Called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Class Constructor Called" << endl;
    }

    ~Derived() {
        cout << "Derived Class Destructor Called" << endl;
    }
};

int main() {
    cout << "Creating Derived object...\n" << endl;

    Derived obj;   // Object creation

    cout << "\nExiting program...\n" << endl;

    return 0;      // Object destruction
}

