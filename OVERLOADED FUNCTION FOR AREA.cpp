#include <iostream>
using namespace std;

float area(float radius) {
    return 3.14159 * radius * radius;
}

float area(float length, float breadth) {
    return length * breadth;
}
\
float area(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    float r, l, b;
    double base, h;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle = " << area(r) << endl;

    cout << "\nEnter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of rectangle = " << area(l, b) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> base >> h;
    cout << "Area of triangle = " << area(base, h) << endl;

    return 0;
}

