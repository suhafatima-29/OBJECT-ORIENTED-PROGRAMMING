#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;

    cout << "Enter size of array: ";
    cin >> n;
    if (n <= 0) 
	{
        cout << "Array size must be positive." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    bool found = false;

    cout << "Subsets with sum " << target << " are:" << endl;

    int totalSubsets = 1 << n;

    for (int mask = 1; mask < totalSubsets; mask++) 
	{ 
        vector<int> subset;
        int sum = 0;

        // Check each bit in mask
        for (int j = 0; j < n; j++) 
		{
            if (mask & (1 << j)) 
			{ 
                subset.push_back(arr[j]);
                sum += arr[j];
            }
        }

        
        if (sum == target) 
		{
            found = true;
            cout << "[";
            for (size_t k = 0; k < subset.size(); k++) 
			{
                cout << subset[k];
                if (k != subset.size() - 1)
                    cout << ", ";
            }
            cout << "]" << endl;
        }
    }

    if (!found) 
	{
        cout << "No subsets found with sum " << target << "." << endl;
    }

    return 0;
}

