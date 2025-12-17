#include <iostream>
using namespace std;

class Notification {
public:
    virtual void send() = 0; 
    virtual ~Notification() {} 
};

class EmailNotification : public Notification {
public:
    void send() {
        cout << "Sending Email Notification..." << endl;
    }
};

class SMSNotification : public Notification {
public:
    void send() {
        cout << "Sending SMS Notification..." << endl;
    }
};

class AppNotification : public Notification {
public:
    void send() {
        cout << "Sending App Notification..." << endl;
    }
};

int main() {
    Notification* n;
    int choice;

    cout << "Select Notification Type:\n";
    cout << "1. Email\n";
    cout << "2. SMS\n";
    cout << "3. App\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
        n = new EmailNotification();
    else if (choice == 2)
        n = new SMSNotification();
    else if (choice == 3)
        n = new AppNotification();
    else {
        cout << "Invalid choice!";
        return 0;
    }

    n->send();   

    delete n;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
    return 0;
}

