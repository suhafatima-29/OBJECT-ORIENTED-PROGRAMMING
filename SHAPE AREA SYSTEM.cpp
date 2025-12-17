#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;   
    virtual ~Shape() {}        
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }

    float area() {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    float area() {
        return length * breadth;
    }
};

class Square : public Shape {
    float side;
public:
    Square(float s) {
        side = s;
    }

    float area() {
        return side * side;
    }
};

int main() {
    Shape* shape;
    int choice;

    cout << "Select Shape to Calculate Area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Square\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        float r;
        cout << "Enter radius: ";
        cin >> r;
        shape = new Circle(r);
    }
    else if (choice == 2) {
        float l, b;
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        shape = new Rectangle(l, b);
    }
    else if (choice == 3) {
        float s;
        cout << "Enter side: ";
        cin >> s;
        shape = new Square(s);
    }
    else {
        cout << "Invalid choice!";
        return 0;
    }

    cout << "Area = " << shape->area() << endl;

    delete shape;   
    return 0;
}

