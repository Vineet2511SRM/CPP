#include <iostream>
using namespace std;

class ATM {
private:
    double balance; // Account balance

public:
    // Default constructor: Balance = Rs. 10,000
    ATM() {
        balance = 10000;
    }

    // Parameterized constructor: User-defined balance
    ATM(double amount) {
        balance = amount;
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient funds!" << endl;
        else {
            balance -= amount;
            cout << "Withdrawal successful. New balance: Rs. " << balance << endl;
        }
    }

    // Deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. New balance: Rs. " << balance << endl;
    }

    // Check balance
    void checkBalance() {
        cout << "Current balance: Rs. " << balance << endl;
    }
};

int main() {
    int choice;
    double amount, initialAmount;

    cout << "Enter initial balance (or 0 for default Rs. 10,000): ";
    cin >> initialAmount;

    // Choose the constructor
    ATM userAccount = (initialAmount > 0) ? ATM(initialAmount) : ATM();

    // Simple transaction menu
    cout << "\n1. Withdraw\n2. Deposit\n3. Check Balance\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter withdrawal amount: ";
        cin >> amount;
        userAccount.withdraw(amount);
    } else if (choice == 2) {
        cout << "Enter deposit amount: ";
        cin >> amount;
        userAccount.deposit(amount);
    } else if (choice == 3) {
        userAccount.checkBalance();
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
