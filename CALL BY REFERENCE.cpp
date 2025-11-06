#include <iostream>
using namespace std;

// Function to swap two numbers using call by reference
void swapReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapReference function: x = " << x << ", y = " << y << endl;
}

int main() {
    int a = 10, b = 20;

    cout << "Before calling swapReference: a = " << a << ", b = " << b << endl;

    swapReference(a, b);

    cout << "After calling swapReference: a = " << a << ", b = " << b << endl;

    return 0;
}

