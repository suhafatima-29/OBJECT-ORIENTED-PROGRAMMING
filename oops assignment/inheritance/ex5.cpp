#include <iostream>
using namespace std;

class employee
{
protected:
    int empno;

public:
    void getdata()
    {
        cout << "Enter employee number: ";
        cin >> empno;
    }

    void putdata()
    {
        cout << "Employee number: " << empno << endl;
    }
};

class employee2 : public employee
{
protected:
    double compensation;
    enum period { hourly, weekly, monthly };
    period paytype;

public:
    void getdata()
    {
        char ch;
        employee::getdata();

        cout << "Enter compensation: ";
        cin >> compensation;

        cout << "Enter pay period (h/w/m): ";
        cin >> ch;

        if (ch == 'h')
            paytype = hourly;
        else if (ch == 'w')
            paytype = weekly;
        else
            paytype = monthly;
    }

    void putdata()
    {
        employee::putdata();
        cout << "Compensation: " << compensation << endl;
        cout << "Pay period: ";

        if (paytype == hourly)
            cout << "Hourly" << endl;
        else if (paytype == weekly)
            cout << "Weekly" << endl;
        else
            cout << "Monthly" << endl;
    }
};

class manager : public employee2
{
};

class scientist : public employee2
{
};

class laborer : public employee2
{
};

int main()
{
    manager m;
    scientist s;
    laborer l;

    cout << "\nEnter Manager Details\n";
    m.getdata();

    cout << "\nEnter Scientist Details\n";
    s.getdata();

    cout << "\nEnter Laborer Details\n";
    l.getdata();

    cout << "\nManager Information\n";
    m.putdata();

    cout << "\nScientist Information\n";
    s.putdata();

    cout << "\nLaborer Information\n";
    l.putdata();

    return 0;
}

