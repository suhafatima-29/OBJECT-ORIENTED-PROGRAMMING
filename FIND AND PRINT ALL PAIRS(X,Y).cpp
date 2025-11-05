#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 1;
    }

    bool found = false;
    int limit = sqrt(n);

    cout << "Pairs (x, y) such that x^2 + y^2 = " << n << " are:" << endl;

    for (int x = 0; x <= limit; x++) 
	{
        for (int y = 0; y <= limit; y++) 
		{

            int sum = (x * x) + (y * y);

            if (sum > n) 
			{
                break;
            }

            if (sum < n) 
			{
                continue; 
            }

            cout << "(" << x << ", " << y << ")" << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No pairs found." << endl;
    }

    return 0;
}

