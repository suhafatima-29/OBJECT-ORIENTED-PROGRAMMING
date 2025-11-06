#include <iostream>
using namespace std;

// Function to swap two numbers using call by pointers
void swapPointer(int *x, int *y) {
    int temp = *x;   
    *x = *y;         
    *y = temp;      
    cout << "Inside swapPointer function: *x = " << *x << ", *y = " << *y << endl;
}

int main() {
    int a = 10, b = 20;

    cout << "Before calling swapPointer: a = " << a << ", b = " << b << endl;

    // Call by pointer (pass the addresses)
    swapPointer(&a, &b);

    cout << "After calling swapPointer: a = " << a << ", b = " << b << endl;

    return 0;
}

