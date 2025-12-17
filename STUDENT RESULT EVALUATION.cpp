#include <iostream>
using namespace std;

class Student {
public:
    virtual void calculateResult() = 0;  
    virtual ~Student() {}                
};

class Undergraduate : public Student {
    int marks;
public:
    Undergraduate(int m) {
        marks = m;
    }

    void calculateResult() {
        cout << "Undergraduate Result: ";
        if (marks >= 40)
            cout << "PASS" << endl;
        else
            cout << "FAIL" << endl;
    }
};

class Postgraduate : public Student {
    int marks;
public:
    Postgraduate(int m) {
        marks = m;
    }

    void calculateResult() {
        cout << "Postgraduate Result: ";
        if (marks >= 50)
            cout << "PASS" << endl;
        else
            cout << "FAIL" << endl;
    }
};

int main() {
    Student* s;
    int choice, marks;

    cout << "Select Student Type:\n";
    cout << "1. Undergraduate\n";
    cout << "2. Postgraduate\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter marks: ";
    cin >> marks;

    if (choice == 1)
        s = new Undergraduate(marks);
    else if (choice == 2)
        s = new Postgraduate(marks);
    else {
        cout << "Invalid choice!";
        return 0;
    }

    s->calculateResult();  

    delete s;   
    return 0;
}

