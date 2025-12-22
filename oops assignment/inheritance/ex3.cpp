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

class sales
{
protected:
    float sale[3];

public:
    void getdata()
    {
        cout << "Enter sales for last 3 months:\n";
        for (int i = 0; i < 3; i++)
            cin >> sale[i];
    }

    void putdata()
    {
        cout << "Sales: ";
        for (int i = 0; i < 3; i++)
            cout << sale[i] << " ";
        cout << endl;
    }
};

class book : public publication, public sales
{
private:
    int pages;

public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
        sales::getdata();
    }

    void putdata()
    {
        publication::putdata();
        cout << "Pages: " << pages << endl;
        sales::putdata();
    }
};

class tape : public publication, public sales
{
private:
    float playtime;

public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter playing time (minutes): ";
        cin >> playtime;
        sales::getdata();
    }

    void putdata()
    {
        publication::putdata();
        cout << "Playing time: " << playtime << endl;
        sales::putdata();
    }
};

int main()
{
    book b;
    tape t;

    cout << "\nEnter Book Details\n";
    b.getdata();

    cout << "\nEnter Tape Details\n";
    t.getdata();

    cout << "\nBook Information\n";
    b.putdata();

    cout << "\nTape Information\n";
    t.putdata();

    return 0;
}

