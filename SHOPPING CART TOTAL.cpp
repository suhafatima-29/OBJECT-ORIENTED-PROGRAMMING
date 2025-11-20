#include <iostream>
using namespace std;

class Item {
private:
    float *price;
    int *quantity;

public:
    Item(float p, int q) {
        price = new float;
        quantity = new int;

        *price = p;
        *quantity = q;
    }

    float totalCost() {
        return (*price) * (*quantity);
    }

    void display() {
        cout << "Price: " << *price << endl;
        cout << "Quantity: " << *quantity << endl;
        cout << "Total Cost: " << totalCost() << endl;
    }

    ~Item() {
        delete price;
        delete quantity;
        cout << "Memory Freed!" << endl;
    }
};

int main() {
    Item item1(250.50, 3);
    item1.display();

    return 0;
}

