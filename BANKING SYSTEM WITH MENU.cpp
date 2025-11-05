#include <iostream>
using namespace std;

int main() {
    float balance = 0.0, amount;
    int choice;

    do {
        cout << "\n====== Simple Banking System ======\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Balance Inquiry\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: Rs ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Amount deposited successfully.\n";
                } else {
                    cout << "Invalid deposit amount!\n";
                }
                break;

            case 2:
                cout << "Enter amount to withdraw: Rs ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid withdrawal amount!\n";
                } else if (amount > balance) {
                    cout << "Insufficient balance! Transaction failed.\n";
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful.\n";
                }
                break;

            case 3:
                cout << "Current balance: Rs " << balance << endl;
                break;

            case 4:
                cout << "Exiting the system. Thank you!\n";
                break;

            default:
                cout << "Invalid choice! Please select 1–4.\n";
        }

    } while (choice != 4);

    return 0;
}

