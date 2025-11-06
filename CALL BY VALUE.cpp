#include <stdio.h>

// Function to swap two integers using call by value
void swapValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("\nInside swapValue function:");
    printf("\na = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;

    printf("Before calling swapValue:");
    printf("\nx = %d, y = %d\n", x, y);

    swapValue(x, y);  // Call by value

    printf("\nAfter calling swapValue:");
    printf("\nx = %d, y = %d\n", x, y);

    return 0;
}

