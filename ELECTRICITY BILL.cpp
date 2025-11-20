#include <iostream>
using namespace std;

class Bill {
private:
    int units;
    float totalAmount;
    const int rate = 5;  

public:
    Bill(int u) {
        units = u;
        totalAmount = units * rate;
    }

    Bill(const Bill &b) {
        units = b.units;
        totalAmount = b.totalAmount;
    }
    
    void display() {
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill: " << totalAmount << endl << endl;
    }
};

int main() {
    Bill B1(120);
    Bill B2 = B1;

    cout << "Original Bill:" << endl;
    B1.display();

    cout << "Copied Bill:" << endl;
    B2.display();

    return 0;
}

