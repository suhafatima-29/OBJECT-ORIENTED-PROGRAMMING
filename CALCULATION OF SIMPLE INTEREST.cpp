#include <iostream>
using namespace std;

// Function to calculate simple interest with default arguments
float simpleInterest(float p, float r = 5.0, float t = 2.0) {
    return (p * r * t) / 100;
}

int main() {
    float principal;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Simple Interest (p=entered, r=6.5, t=3): " 
         << simpleInterest(principal, 6.5, 3) << endl;

    cout << "Simple Interest (p=entered, r=7.0, t=default): " 
         << simpleInterest(principal, 7.0) << endl;

    cout << "Simple Interest (p=entered, r=default, t=default): " 
         << simpleInterest(principal) << endl;

    return 0;
}

