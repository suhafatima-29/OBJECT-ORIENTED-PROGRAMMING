#include <stdio.h>

// Function to swap two integers using pointers
void swapPointer(int *x, int *y) {
    int temp;
    temp = *x;   // store value of x
    *x = *y;     // assign y's value to x
    *y = temp;   // assign stored value to y

    printf("\nInside swapPointer function:");
    printf("\n*x = %d, *y = %d\n", *x, *y);
}

int main() {
    int a = 10, b = 20;

    printf("Before calling swapPointer:");
    printf("\na = %d, b = %d\n", a, b);

    swapPointer(&a, &b);  // Call by pointer (addresses passed)

    printf("\nAfter calling swapPointer:");
    printf("\na = %d, b = %d\n", a, b);

    return 0;
}

