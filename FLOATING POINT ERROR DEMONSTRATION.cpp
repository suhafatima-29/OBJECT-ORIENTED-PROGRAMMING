#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    float af = 1e20f, bf = 3.1415926f, cf = 1e10f;
    double ad = 1e20, bd = 3.141592653589793, cd = 1e10;

    cout << fixed << setprecision(10);

    float result1f = (af * bf) / cf;
    float result2f = (af / cf) * bf;
    cout << "Float results:\n";
    cout << "(a*b)/c = " << result1f << endl;
    cout << "(a/c)*b = " << result2f << endl;
    
    double result1d = (ad * bd) / cd;
    double result2d = (ad / cd) * bd;
    cout << "\nDouble results:\n";
    cout << "(a*b)/c = " << result1d << endl;
    cout << "(a/c)*b = " << result2d << endl;

    return 0;
}

