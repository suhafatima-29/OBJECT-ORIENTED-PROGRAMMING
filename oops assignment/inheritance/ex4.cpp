#include <iostream>
using namespace std;

class publication
{
protected:
    char title[50];
    float price;

public:
    void getdata()
    {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }

    void putdata()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class disk : public publication
{
private:
    enum disktype { CD, DVD };
    disktype dtype;

public:
    void getdata()
    {
        char ch;
        publication::getdata();

        cout << "Enter disk type (c for CD, d for DVD): ";
        cin >> ch;

        if (ch == 'c' || ch == 'C')
            dtype = CD;
        else
            dtype = DVD;
    }

    void putdata()
    {
        publication::putdata();
        cout << "Disk type: ";
        if (dtype == CD)
            cout << "CD" << endl;
        else
            cout << "DVD" << endl;
    }
};

int main()
{
    disk d;

    cout << "\nEnter Disk Details\n";
    d.getdata();

    cout << "\nDisk Information\n";
    d.putdata();

    return 0;
}

