#include <iostream>
using namespace std;

bool isPrime(int num) 
{
    if (num <= 1)
        return false; 
    int i = 2;
    while (i * i <= num) 
	{ 
        if (num % i == 0)
            return false;
        i++;
    }
    return true;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 2)
	{
        cout << "There are no prime numbers less than or equal to " << n << "." << endl;
        return 0;
    }

    cout << "Prime numbers up to " << n << " are: ";

    int num = 2; 
    while (num <= n)
	 {
        if (isPrime(num))
            cout << num << " ";
        num++;
    }

    cout << endl;
    return 0;
}

