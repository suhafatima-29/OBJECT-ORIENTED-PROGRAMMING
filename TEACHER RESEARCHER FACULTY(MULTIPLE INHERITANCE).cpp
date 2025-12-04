#include <iostream>
#include <string>
using namespace std;

class Teacher {
protected:
    string name;
    string department;
    int experience;  

public:
    void getTeachingInfo() {
        cin.ignore();
        cout << "Enter Teacher Name: ";
        cin.ignore();        
		getline(cin,name);

        cout << "Enter Department: ";
        cin.ignore();
        getline(cin,department);

        cout << "Enter Years of Experience : ";
        cin >> experience;
    }
};

class Researcher {
protected:
    int publications;
    string researchArea;

public:
    void getResearchInfo() {
        cout << "Enter Number of Publications : ";
        cin >> publications;
        cin.ignore();

        cout << "Enter Research Area: ";
        getline(cin, researchArea);
    }
};

class Faculty : public Teacher, public Researcher {
public:
    void displayProfile() {
        cout << "\n=========== FACULTY PROFILE ===========" << endl;
        cout << "Name                : " << name << endl;
        cout << "Department          : " << department << endl;
        cout << "Experience          : " << experience << " years" << endl;
        cout << "Publications        : " << publications << endl;
        cout << "Research Area       : " << researchArea << endl;
        cout << "=======================================" << endl;
    }
};

int main() {
    Faculty f;

    f.getTeachingInfo();
    f.getResearchInfo();
    f.displayProfile();

    return 0;
}

