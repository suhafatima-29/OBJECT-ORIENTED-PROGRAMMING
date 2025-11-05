#include <iostream>
#include <string>
using namespace std;

void caesarCipher(string &text, int key) {
    for (int i = 0; i < text.length(); i++) {
        char c = text[i];
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            text[i] = (c - base + key) % 26 + base;
        }
    }
}

void xorEncrypt(string &text, char key) {
    for (int i = 0; i < text.length(); i++) {
        text[i] = text[i] ^ key;
    }
}

void displayASCII(const string &text) {
    for (int i = 0; i < text.length(); i++) {
        cout << text[i] << "(" << int(text[i]) << ") ";
    }
    cout << endl;
}

int main() {
    string text;
    int caesarKey;
    char xorKey;

    cout << "Enter text to encrypt: ";
    getline(cin, text);

    cout << "\nOriginal text and ASCII values:\n";
    displayASCII(text);

    // Caesar Cipher
    cout << "\nEnter Caesar Cipher key (shift value): ";
    cin >> caesarKey;
    string caesarText = text;
    caesarCipher(caesarText, caesarKey);
    cout << "Caesar Cipher encrypted text and ASCII values:\n";
    displayASCII(caesarText);

    // XOR Encryption
    cout << "\nEnter XOR key (single character): ";
    cin >> xorKey;
    string xorText = text;
    xorEncrypt(xorText, xorKey);
    cout << "XOR encrypted text and ASCII values:\n";
    displayASCII(xorText);

    return 0;
}

