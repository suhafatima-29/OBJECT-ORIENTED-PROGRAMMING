#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll;

public:
    void getStudentData() {
        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Roll Number : ";
        cin >> roll;
    }
};

class Sports : virtual public Student {
protected:
    float sportsScore;

public:
    void getSportsScore() {
        cout << "Enter Sports Score (out of 50): ";
        cin >> sportsScore;
    }
};

class Academics : virtual public Student {
protected:
    float academicScore;

public:
    void getAcademicScore() {
        cout << "Enter Academic Score (out of 50): ";
        cin >> academicScore;
    }
};

class Result : public Sports, public Academics {
private:
    float finalScore;

public:
    void calculateFinal() {
        finalScore = sportsScore + academicScore;  // out of 100
    }

    void displayResult() {
        cout << "\n========== STUDENT PERFORMANCE REPORT ==========" << endl;
        cout << "Name        : " << name << endl;
        cout << "Roll No.    : " << roll << endl;
        cout << "Sports      : " << sportsScore << "/50" << endl;
        cout << "Academics   : " << academicScore << "/50" << endl;
        cout << "-----------------------------------------------" << endl;
        cout << "Final Score : " << finalScore << "/100" << endl;

        if (finalScore >= 85)
            cout << "Remark      : Excellent" << endl;
        else if (finalScore >= 70)
            cout << "Remark      : Good" << endl;
        else if (finalScore >= 50)
            cout << "Remark      : Average" << endl;
        else
            cout << "Remark      : Needs Improvement" << endl;

        cout << "===============================================" << endl;
    }
};

int main() {
    Result obj;

    obj.getStudentData();
    obj.getSportsScore();
    obj.getAcademicScore();
    obj.calculateFinal();
    obj.displayResult();

    return 0;
}

