#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    Rectangle(float l) {
        length = l;
        width = l;
    }

    float area() {
        return length * width;
    }

    float perimeter() {
        return 2 * (length + width);
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area = " << area() << endl;
        cout << "Perimeter = " << perimeter() << endl << endl;
    }
};

int main() {
    Rectangle R1(10, 5);

    Rectangle R2(7);

    cout << "Rectangle:" << endl;
    R1.display();

    cout << "Square:" << endl;
    R2.display();

    return 0;
}

