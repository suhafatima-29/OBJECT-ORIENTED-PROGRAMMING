#include <iostream>
using namespace std;

class BankAccount {
public:
    virtual float interest() = 0;   
    virtual ~BankAccount() {}      
};

class SavingsAccount : public BankAccount {
    float principal, rate, time;
public:
    SavingsAccount(float p, float r, float t) {
        principal = p;
        rate = r;
        time = t;
    }

    float interest() {
        // Simple Interest = (P * R * T) / 100
        return (principal * rate * time) / 100;
    }
};

class FixedDeposit : public BankAccount {
    float principal, rate, time;
public:
    FixedDeposit(float p, float r, float t) {
        principal = p;
        rate = r;
        time = t;
    }

    float interest() {
        // Compound Interest = P * (1 + R/100)^T - P
        float amount = principal;
        for (int i = 0; i < time; i++) {
            amount *= (1 + rate / 100);
        }
        return amount - principal;
    }
};

class RecurringDeposit : public BankAccount {
    float monthlyDeposit, rate, months;
public:
    RecurringDeposit(float m, float r, float mo) {
        monthlyDeposit = m;
        rate = r;
        months = mo;
    }

    float interest() {
        return (monthlyDeposit * months * (months + 1) * rate) / (2 * 12 * 100);
    }
};

int main() {
    BankAccount* account;
    int choice;

    cout << "Select Account Type:\n";
    cout << "1. Savings Account\n";
    cout << "2. Fixed Deposit\n";
    cout << "3. Recurring Deposit\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        float p, r, t;
        cout << "Enter Principal, Rate, Time (years): ";
        cin >> p >> r >> t;
        account = new SavingsAccount(p, r, t);
    }
    else if (choice == 2) {
        float p, r, t;
        cout << "Enter Principal, Rate, Time (years): ";
        cin >> p >> r >> t;
        account = new FixedDeposit(p, r, t);
    }
    else if (choice == 3) {
        float m, r, mo;
        cout << "Enter Monthly Deposit, Rate, Months: ";
        cin >> m >> r >> mo;
        account = new RecurringDeposit(m, r, mo);
    }
    else {
        cout << "Invalid choice!";
        return 0;
    }

    cout << "Calculated Interest = " << account->interest() << endl;

    delete account; 
    return 0;
}

