#include <iostream>
using namespace std;

class employee
{
protected:
    int empno;
    float salary;

public:
    void getdata()
    {
        cout << "Enter employee number: ";
        cin >> empno;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void putdata() const
    {
        cout << "Employee number: " << empno << endl;
        cout << "Salary: " << salary << endl;
    }
};

class manager : public employee
{
protected:
    int dues;

public:
    void getdata()
    {
        employee::getdata();
        cout << "Enter club dues: ";
        cin >> dues;
    }

    void putdata() const
    {
        employee::putdata();
        cout << "Club dues: " << dues << endl;
    }
};

class executive : public manager
{
private:
    double bonus;
    int shares;

public:
    void getdata()
    {
        manager::getdata();
        cout << "Enter yearly bonus: ";
        cin >> bonus;
        cout << "Enter number of shares: ";
        cin >> shares;
    }

    void putdata() const
    {
        manager::putdata();
        cout << "Yearly bonus: " << bonus << endl;
        cout << "Stock shares: " << shares << endl;
    }
};

int main()
{
    executive e;

    cout << "\nEnter Executive Details\n";
    e.getdata();

    cout << "\nExecutive Information\n";
    e.putdata();

    return 0;
}

