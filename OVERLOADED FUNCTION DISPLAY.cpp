#include <iostream>
#include <string>
using namespace std;

void display(int num) {
    cout << "Displaying integer: " << num << endl;
}

void display(float num) {
    cout << "Displaying float: " << num << endl;
}

void display(string text) {
    cout << "Displaying string: " << text << endl;
}

int main() {
    int a = 10;
    float b = 12.75;
    string c = "Function Overloading Example";

    // Function calls
    display(a);   
    display(b);    
    display(c);   

    return 0;
}

