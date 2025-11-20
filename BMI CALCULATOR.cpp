#include <iostream>
using namespace std;

class BMI {
private:
    float weight, height;

public:
    BMI(float w, float h) {
        weight = w;
        height = h;
    }
    
    float calculateBMI() {
        return weight / (height * height);
    }

    void display() {
        float bmi = calculateBMI();
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Height: " << height << " m" << endl;
        cout << "BMI = " << bmi << endl;
        if (bmi < 18.5)
            cout << "Category: Underweight" << endl;
        else if (bmi >= 18.5 && bmi < 24.9)
            cout << "Category: Normal" << endl;
        else if (bmi >= 25 && bmi < 29.9)
            cout << "Category: Overweight" << endl;
        else
            cout << "Category: Obese" << endl;
    }
};

int main() {
    float w, h;

    cout << "Enter weight (kg): ";
    cin >> w;

    cout << "Enter height (m): ";
    cin >> h;

    BMI person(w, h);
    person.display();

    return 0;
}

