#include <iostream>
using namespace std;

int main() {
    char str[200];
    int upper = 0, lower = 0, digit = 0, space = 0, special = 0;

    cout << "Enter a string: ";
    cin.getline(str, 200); 

    for (int i = 0; str[i] != '\0'; ++i) {
        char ch = str[i];

        if (ch >= 65 && ch <= 90)
            upper++;

        else if (ch >= 97 && ch <= 122)
            lower++;

        else if (ch >= 48 && ch <= 57)
            digit++;

        else if (ch == 32 || ch == 9 || ch == 10)
            space++;

        else
            special++;
    }

    cout << "\n--- Character Count Summary ---\n";
    cout << "Uppercase letters : " << upper << endl;
    cout << "Lowercase letters : " << lower << endl;
    cout << "Digits            : " << digit << endl;
    cout << "Whitespace        : " << space << endl;
    cout << "Special characters: " << special << endl;

    return 0;
}

