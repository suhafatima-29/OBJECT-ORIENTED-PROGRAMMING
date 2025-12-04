#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int roll;

public:
    void getStudentData() {
        cout << "Enter Student Name: ";
       cin.ignore();
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> roll;
    }
};

// Derived class
class Marks : public Student {
private:
    float m1, m2, m3, total, percentage;

public:
    void getMarks() {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void calculate() {
        total = m1 + m2 + m3;
        percentage = (total / 300) * 100;
    }

    void displayReport() {
        cout << "\nSTUDENT ACADEMIC REPORT\n";
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << roll << endl;
        cout << "Marks       : " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Total Marks : " << total << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
        cout << "=============================================\n";
    }
};

int main() {
    Marks obj;

    cin.ignore();  
    obj.getStudentData();
    obj.getMarks();

    obj.calculate();

    obj.displayReport();

    return 0;
}

