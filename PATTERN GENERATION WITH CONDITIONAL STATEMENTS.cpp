#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of checkerboard (n): ";
    cin >> n;

    if (n <= 0) 
	{
        cout << "Please enter a positive integer for n." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            
            if ((i + j) % 2 == 0)
                cout << "# ";
            else
                cout << "  "; 
        }
        cout << endl;
    }

    return 0;
}

