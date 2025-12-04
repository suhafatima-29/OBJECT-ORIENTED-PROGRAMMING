#include <iostream>
#include <iomanip>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getPersonalInfo() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
    }
};

class Student : public Person {
protected:
    int rollNo;
    string course;

public:
    void getAcademicInfo() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();
        cout << "Enter Course: ";
        getline(cin, course);
    }
};

class Result : public Student {
private:
    float m1, m2, m3, total, percentage;

public:
    void getMarks() {
        cout << "Enter marks for 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void calculate() {
        total = m1 + m2 + m3;
        percentage = (total / 300.0f) * 100;
    }

    void displaySummary() {
        cout << "\nSTUDENT PERFORMANCE SUMMARY\n";
        cout << "Name       : " << name << endl;
        cout << "Age        : " << age << endl;
        cout << "Roll No.   : " << rollNo << endl;
        cout << "Course     : " << course << endl;

        cout << fixed << setprecision(2);
        cout << "Marks      : " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Total      : " << total << endl;
        cout << "Percentage : " << percentage << "%" << endl;

        cout << "----------------------------------------------------\n";

        if (percentage >= 75)
            cout << "Result     : Distinction" << endl;
        else if (percentage >= 60)
            cout << "Result     : First Class" << endl;
        else if (percentage >= 50)
            cout << "Result     : Second Class" << endl;
        else
            cout << "Result     : Fail" << endl;

        cout << "\n";
    }
};

int main() {
    Result student;

    student.getPersonalInfo();
    student.getAcademicInfo();
    student.getMarks();
    student.calculate();
    student.displaySummary();

    return 0;
}

