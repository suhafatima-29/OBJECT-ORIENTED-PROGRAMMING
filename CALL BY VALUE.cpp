#include <iostream>
using namespace std;

// Function to swap two numbers using call by value
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapValue function: a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 10, y = 20;

    cout << "Before calling swapValue: x = " << x << ", y = " << y << endl;

    swapValue(x, y);

    cout << "After calling swapValue: x = " << x << ", y = " << y << endl;

    return 0;
}

