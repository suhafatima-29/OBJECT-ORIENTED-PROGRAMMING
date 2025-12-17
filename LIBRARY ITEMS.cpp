#include <iostream>
#include <string>
using namespace std;

class LibraryItem {
public:
    virtual void displayInfo() = 0;  
    virtual ~LibraryItem() {}        
};

class Book : public LibraryItem {
    string title, author;
public:
    Book(string t, string a) {
        title = t;
        author = a;
    }

    void displayInfo() {
        cout << "Book Title   : " << title << endl;
        cout << "Author       : " << author << endl;
    }
};

class Magazine : public LibraryItem {
    string title;
    int issueNumber;
public:
    Magazine(string t, int i) {
        title = t;
        issueNumber = i;
    }

    void displayInfo() {
        cout << "Magazine     : " << title << endl;
        cout << "Issue Number : " << issueNumber << endl;
    }
};

class DVD : public LibraryItem {
    string title;
    int duration;  
public:
    DVD(string t, int d) {
        title = t;
        duration = d;
    }

    void displayInfo() {
        cout << "DVD Title    : " << title << endl;
        cout << "Duration     : " << duration << " minutes" << endl;
    }
};

int main() {
    LibraryItem* items[3];

    items[0] = new Book("Object Oriented Programming", "Bjarne Stroustrup");
    items[1] = new Magazine("Tech Today", 45);
    items[2] = new DVD("C++ Masterclass", 120);

    cout << "Library Item Details:\n\n";
    for (int i = 0; i < 3; i++) {
        items[i]->displayInfo();  
        cout << "----------------------\n";
    }

    for (int i = 0; i < 3; i++) {
        delete items[i];
    }

    return 0;
}

