#include <iostream>
using namespace std;

int main() {
    float f = 1.0f, eps_f = 1.0f;
    double d = 1.0, eps_d = 1.0;

    while ((1.0f + eps_f / 2.0f) != 1.0f) {
        eps_f /= 2.0f;
    }

    while ((1.0 + eps_d / 2.0) != 1.0) {
        eps_d /= 2.0;
    }

    cout << "Smallest detectable difference (epsilon):\n";
    cout << "Float epsilon: " << eps_f << endl;
    cout << "Double epsilon: " << eps_d << endl;

    return 0;
}

