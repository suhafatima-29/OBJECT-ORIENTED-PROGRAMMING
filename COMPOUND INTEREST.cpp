#include <iostream>
#include <cmath>
using namespace std;

class CompoundInterest {
private:
    float principal, rate;
    int time, n;

public:
    CompoundInterest(float p, float r, int t, int comp = 1) {
        principal = p;
        rate = r;
        time = t;
        n = comp;
    }
    void display() {
        float amount = principal * pow((1 + rate / n), n * time);
        float ci = amount - principal;

        cout << "Principal: " << principal << endl;
        cout << "Rate: " << rate << endl;
        cout << "Time: " << time << " years" << endl;
        cout << "Compounded: " << n << " times/year" << endl;
        cout << "Amount = " << amount << endl;
        cout << "Compound Interest = " << ci << endl << endl;
    }
};

int main() {
    CompoundInterest C1(10000, 0.05, 2);
    CompoundInterest C2(10000, 0.05, 2, 4);

    cout << "Default Compounding (Annually):" << endl;
    C1.display();

    cout << "Quarterly Compounding:" << endl;
    C2.display();

    return 0;
}

