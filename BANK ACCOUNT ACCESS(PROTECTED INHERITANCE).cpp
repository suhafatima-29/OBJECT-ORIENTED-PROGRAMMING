#include <iostream>
using namespace std;

class Account {
protected:
    float balance;

public:
    Account() {
        balance = 0.0f;
    }
};

class SavingsAccount : protected Account {

public:
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount Deposited: Rs. " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Amount Withdrawn: Rs. " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void displayBalance() {
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

int main() {
    SavingsAccount acc;
    int choice;
    float amount;

    while (true) {
        cout << "\n===== BANK MENU =====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            acc.deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            acc.withdraw(amount);
            break;
        case 3:
            acc.displayBalance();
            break;
        case 4:
            cout << "Thank you for using our banking system.\n";
            return 0;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}

