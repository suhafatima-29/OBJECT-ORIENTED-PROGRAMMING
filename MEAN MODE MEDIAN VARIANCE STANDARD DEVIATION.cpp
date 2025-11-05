#include <iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int n) {
    for(int i = 0; i < n - 1; ++i) {
        for(int j = 0; j < n - i - 1; ++j) {
            if(arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
T mean(T arr[], int n) {
    T sum = 0;
    for(int i = 0; i < n; ++i) sum += arr[i];
    return sum / n;
}

template <typename T>
T median(T arr[], int n) {
    sortArray(arr, n);
    if(n % 2 == 0)
        return (arr[n/2 - 1] + arr[n/2]) / 2;
    else
        return arr[n/2];
}

template <typename T>
T mode(T arr[], int n) {
    sortArray(arr, n);
    T modeValue = arr[0];
    int maxCount = 1, count = 1;
    
    for(int i = 1; i < n; ++i) {
        if(arr[i] == arr[i - 1]) {
            count++;
        } else {
            if(count > maxCount) {
                maxCount = count;
                modeValue = arr[i - 1];
            }
            count = 1;
        }
    }
    if(count > maxCount)
        modeValue = arr[n - 1];
    return modeValue;
}

template <typename T>
T variance(T arr[], int n) {
    T m = mean(arr, n);
    T var = 0;
    for(int i = 0; i < n; ++i)
        var += (arr[i] - m) * (arr[i] - m);
    return var / n;
}

template <typename T>
T stddev(T arr[], int n) {
    T var = variance(arr, n);
    T guess = var;  
    for(int i = 0; i < 10; ++i)
        guess = 0.5 * (guess + var / guess);
    return guess;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    double *darr = new double[n];
    float *farr = new float[n];

    cout << "Enter " << n << " real numbers:\n";
    for(int i = 0; i < n; ++i) {
        cin >> darr[i];
        farr[i] = (float)darr[i];
    }

    cout << "\n--- Using DOUBLE precision ---\n";
    cout << "Mean = " << mean(darr, n) << endl;
    cout << "Median = " << median(darr, n) << endl;
    cout << "Mode = " << mode(darr, n) << endl;
    cout << "Variance = " << variance(darr, n) << endl;
    cout << "Standard Deviation = " << stddev(darr, n) << endl;

    cout << "\n--- Using FLOAT precision ---\n";
    cout << "Mean = " << mean(farr, n) << endl;
    cout << "Median = " << median(farr, n) << endl;
    cout << "Mode = " << mode(farr, n) << endl;
    cout << "Variance = " << variance(farr, n) << endl;
    cout << "Standard Deviation = " << stddev(farr, n) << endl;

    cout << "\nNote: Differences between FLOAT and DOUBLE appear for very small or very large numbers due to precision loss.\n";

    delete[] darr;
    delete[] farr;
    return 0;
}

