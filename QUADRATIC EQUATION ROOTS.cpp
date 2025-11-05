#include <iostream>
#include <cmath>
using namespace std;

int main() {
double a, b, c;
cout << "Enter coefficients a, b and c: ";
cin >> a >> b >> c;

bool validA = (a != 0) ? true : false;

if (validA) 
{
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct: " << root1 << " and " << root2 << endl;
    } 
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Roots are real and equal: " << root << " and " << root << endl;
    } 
    else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are imaginary: "
             << realPart << " + " << imagPart << "i and "
             << realPart << " - " << imagPart << "i" << endl;
    }
} 
else {
    cout << "Invalid input! 'a' cannot be zero." << endl;
}

return 0;

}

