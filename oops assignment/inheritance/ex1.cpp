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

class book : public publication
{
private:
    int pages;

public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
    }

    void putdata()
    {
        publication::putdata();
        cout << "Pages: " << pages << endl;
    }
};

class tape : public publication
{
private:
    float playtime;

public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter playing time (minutes): ";
        cin >> playtime;
    }

    void putdata()
    {
        publication::putdata();
        cout << "Playing time: " << playtime << " minutes" << endl;
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

