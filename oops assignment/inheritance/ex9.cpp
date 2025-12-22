#include <iostream>
using namespace std;

class date
{
private:
    int month;
    int day;
    int year;

public:
    void getdata()
    {
        cout << "Enter month day year: ";
        cin >> month >> day >> year;
    }

    void putdata() const
    {
        cout << "Publication date: "
             << month << "/" << day << "/" << year << endl;
    }
};

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

    void putdata() const
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class publication2 : public publication
{
protected:
    date pubdate;

public:
    void getdata()
    {
        publication::getdata();
        pubdate.getdata();
    }

    void putdata() const
    {
        publication::putdata();
        pubdate.putdata();
    }
};

class book : public publication2
{
private:
    int pages;

public:
    void getdata()
    {
        publication2::getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
    }

    void putdata() const
    {
        publication2::putdata();
        cout << "Pages: " << pages << endl;
    }
};

class tape : public publication2
{
private:
    float playtime;

public:
    void getdata()
    {
        publication2::getdata();
        cout << "Enter playing time (minutes): ";
        cin >> playtime;
    }

    void putdata() const
    {
        publication2::putdata();
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

