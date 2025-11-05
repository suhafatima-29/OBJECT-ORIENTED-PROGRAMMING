#include <iostream>
#include <cmath>  // for sqrt()

using namespace std;

int main() 
{
    int N;
    cout << "Enter the number of values: ";
    cin >> N;

    if (N <= 0) 
	{
        cout << "Invalid input. N must be positive." << endl;
        return 1;
    }

    double number;
    double sum = 0;
    double sum_squares = 0;
    double smallest, largest;

    cout << "Enter the values:\n";

    for (int i = 0; i < N; i++) 
	{
        cin >> number;

        sum += number;
        sum_squares += number * number;

        if (i == 0) 
		{  
            smallest = largest = number;
        } 
		else 
		{
            if (number < smallest) smallest = number;
            if (number > largest) largest = number;
        }
    }

    double average = sum / N;
    double range = largest - smallest;
    double std_dev = sqrt(sum_squares / N - average * average);

    cout << "Smallest value: " << smallest << endl;
    cout << "Largest value: " << largest << endl;
    cout << "Average value: " << average << endl;
    cout << "Range: " << range << endl;
    cout << "Standard deviation: " << std_dev << endl;

    return 0;
}

