#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

    void normalize() {
        if (centimeters >= 100) {
            meters += centimeters / 100;
            centimeters = centimeters % 100;
        }
    }

public:
    Distance(int m) {
        meters = m;
        centimeters = 0;
    }

    Distance(int m, int cm) {
        meters = m;
        centimeters = cm;
        normalize();
    }

    Distance add(Distance d) {
        Distance temp(0, 0);
        temp.meters = meters + d.meters;
        temp.centimeters = centimeters + d.centimeters;
        temp.normalize();
        return temp;
    }

    void display() {
        cout << meters << " meters " << centimeters << " centimeters" << endl;
    }
};

int main() {
    Distance d1(5, 75);   
    Distance d2(3);       

    Distance d3 = d1.add(d2);

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    cout << "Total Distance: ";
    d3.display();

    return 0;
}

