#include <iostream>
using namespace std;

int main()
 {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    if (n <= 0) 
	{
        cout << "Please enter a positive number of rows." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) 
	{

        for (int space = n - i; space > 0; space--)
		{
            cout << " ";
        }

        for (int j = 1; j <= i; j++) 
		{
            cout << j << " ";
        }

        cout << endl; 
    }

    return 0;
}

