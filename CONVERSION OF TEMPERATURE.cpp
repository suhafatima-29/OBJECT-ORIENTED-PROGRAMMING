#include <iostream>
#include <iomanip>
using namespace std;

// Convert Celsius to Fahrenheit
float cToF(float c) { return (c * 9 / 5) + 32; }
double cToF(double c) { return (c * 9.0 / 5.0) + 32.0; }

// Convert Celsius to Kelvin
float cToK(float c) { return c + 273.15f; }
double cToK(double c) { return c + 273.15; }

// Convert Fahrenheit to Celsius
float fToC(float f) { return (f - 32) * 5 / 9; }
double fToC(double f) { return (f - 32.0) * 5.0 / 9.0; }

// Convert Kelvin to Celsius
float kToC(float k) { return k - 273.15f; }
double kToC(double k) { return k - 273.15; }

int main() {
    float tempF, tempC, tempK;
    double tempFd, tempCd, tempKd;

    cout << fixed << setprecision(8);

    // Input a temperature in Celsius
    cout << "Enter a temperature in Celsius (float): ";
    cin >> tempC;
    tempF = cToF(tempC);
    tempK = cToK(tempC);

    cout << "\nFloat results:\n";
    cout << "Celsius: " << tempC << " C\n";
    cout << "Fahrenheit: " << tempF << " F\n";
    cout << "Kelvin: " << tempK << " K\n";

    cout << "\nEnter a temperature in Celsius (double): ";
    cin >> tempCd;
    tempFd = cToF(tempCd);
    tempKd = cToK(tempCd);

    cout << "\nDouble results:\n";
    cout << "Celsius: " << tempCd << " C\n";
    cout << "Fahrenheit: " << tempFd << " F\n";
    cout << "Kelvin: " << tempKd << " K\n";

    cout << "\nPrecision check for very large/small values:\n";
    float largeF = cToF(1e10f);
    double largeD = cToF(1e10);
    cout << "1e10 C to F (float): " << largeF << ", (double): " << largeD << endl;

    float smallF = cToF(1e-10f);
    double smallD = cToF(1e-10);
    cout << "1e-10 C to F (float): " << smallF << ", (double): " << smallD << endl;

    return 0;
}

