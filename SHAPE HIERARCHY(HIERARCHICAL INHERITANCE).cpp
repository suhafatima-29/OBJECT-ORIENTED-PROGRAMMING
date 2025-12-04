#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void getData() {}
    virtual float area() { return 0; }  
};

class Circle : public Shape {
private:
    float radius;

public:
    void getData() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    float area() {
        return 3.14159f * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    float length, breadth;

public:
    void getData() {
        cout << "Enter length and breadth of rectangle: ";
        cin >> length >> breadth;
    }

    float area() {
        return length * breadth;
    }
};

class Triangle : public Shape {
private:
    float base, height;

public:
    void getData() {
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
    }

    float area() {
        return 0.5f * base * height;
    }
};

int main() {
    Shape *shape;
    int choice;

    cout << "AREA CALCULATOR (Hierarchical Inheritance) \n";
    cout << "1. Area of Circle\n";
    cout << "2. Area of Rectangle\n";
    cout << "3. Area of Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        shape = new Circle;
    }
    else if (choice == 2) {
        shape = new Rectangle;
    }
    else if (choice == 3) {
        shape = new Triangle;
    }
    else {
        cout << "Invalid choice!";
        return 0;
    }

    shape->getData();
    cout << "Area = " << shape->area() << endl;

    delete shape;
    return 0;
}

