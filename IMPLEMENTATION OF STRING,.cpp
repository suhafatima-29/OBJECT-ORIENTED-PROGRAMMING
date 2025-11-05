#include <iostream>
using namespace std;

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void reverseString(char str[]) {
    int len = stringLength(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void substring(char str[], int start, int length, char sub[]) {
    int i;
    for (i = 0; i < length && str[start + i] != '\0'; i++) {
        sub[i] = str[start + i];
    }
    sub[i] = '\0';
}

void concatenate(char str1[], char str2[], char result[]) {
    int i = 0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    int j = 0;
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';
}

int frequency(char str[], char ch) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }
    return count;
}

int main() {
    char str[100], str2[100], result[200], sub[100];
    char ch;
    int start, len;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Length of the string: " << stringLength(str) << endl;

    reverseString(str);
    cout << "Reversed string: " << str << endl;

    cout << "Enter start index and length for substring: ";
    cin >> start >> len;
    substring(str, start, len, sub);
    cout << "Substring: " << sub << endl;

    cin.ignore(); 
    
    cout << "Enter another string to concatenate: ";
    cin.getline(str2, 100);
    concatenate(str, str2, result);
    cout << "Concatenated string: " << result << endl;

    cout << "Enter a character to find its frequency: ";
    cin >> ch;
    cout << "Frequency of " << ch << ": " << frequency(str, ch) << endl;

    return 0;
}

