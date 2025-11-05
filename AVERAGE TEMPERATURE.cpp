#include <iostream>
using namespace std;

int main() {
    int temps[] = {55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 65, 78, 82, 88, 91,
                   92, 90, 93, 87, 80, 78, 79, 72, 68, 61, 59};
    int N = sizeof(temps) / sizeof(temps[0]);

    int hotDays = 0;
    int pleasantDays = 0;
    int coldDays = 0;
    double sum = 0;

    cout << "Temperature categories:\n";

    for (int i = 0; i < N; i++) {
        cout << temps[i] << " : ";

        if (temps[i] >= 85) {
            cout << "Hot day\n";
            hotDays++;
        } else if (temps[i] >= 60 && temps[i] <= 84) {
            cout << "Pleasant day\n";
            pleasantDays++;
        } else {  
            cout << "Cold day\n";
            coldDays++;
        }

        sum += temps[i]; 
    }

    double average = sum / N;

    cout << "\nSummary:\n";
    cout << "Number of hot days: " << hotDays << endl;
    cout << "Number of pleasant days: " << pleasantDays << endl;
    cout << "Number of cold days: " << coldDays << endl;
    cout << "Average temperature: " << average << endl;

    return 0;
}

