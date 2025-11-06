#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

string sum(string s1, string s2) {
    return s1 + s2;
}

int main() {
    int x = 10, y = 20, z = 30;
    string str1 = "Hello ", str2 = "World!";

    cout << "Sum of two integers: " << sum(x, y) << endl;
    cout << "Sum of three integers: " << sum(x, y, z) << endl;
    cout << "Sum (concatenation) of two strings: " << sum(str1, str2) << endl;

    return 0;
}

