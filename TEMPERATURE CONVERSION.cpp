#include<iostream>
using namespace std;

class Temperature {
private:
    float celsius;

public:
    Temperature(float c) 
	{
        celsius = c;
    }

    void display() {
        float fahrenheit = (celsius * 9 / 5) + 32;
        cout << "Celsius: " << celsius << "°C" << endl;
        cout << "Fahrenheit: " << fahrenheit << "°F" << endl;
    }
};

int main() {
    float c;

    cout << "Enter temperature in Celsius: ";
    cin >> c;

    Temperature T(c);
    T.display();

    return 0;
}

