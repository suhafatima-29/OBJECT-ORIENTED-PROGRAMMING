#include <iostream>
using namespace std;

// Function to swap two integers using call by reference
void swapReference(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;

    cout << "\nInside swapReference function:";
    cout << "\nx = " << x << ", y = " << y << endl;
}

int main() {
    int a = 10, b = 20;

    cout << "Before calling swapReference:";
    cout << "\na = " << a << ", b = " << b << endl;

    swapReference(a, b);  // Call by reference

    cout << "\nAfter calling swapReference:";
    cout << "\na = " << a << ", b = " << b << endl;

    return 0;
}

