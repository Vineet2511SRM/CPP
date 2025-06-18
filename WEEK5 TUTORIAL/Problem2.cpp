#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // 🔹 Default Constructor (Zero Balance Account)
    BankAccount() : accountNumber("000000"), balance(0.0) {}

    // 🔹 Parameterized Constructor (With Initial Balance)
    BankAccount(string accNum, double bal) : accountNumber(accNum), balance(bal) {}

    // 🔹 Constructor Overloading (Account with Zero Balance)
    BankAccount(string accNum) : accountNumber(accNum), balance(0.0) {}

    // 🔹 Deposit Function Overloading
    void deposit(double amount) { 
        balance += amount; 
        cout << "Deposited: $" << amount << " (New Balance: $" << balance << ")\n";
    }
    void deposit(int amount) { // Overloaded for integer deposits
        balance += amount;
        cout << "Deposited: $" << amount << " (New Balance: $" << balance << ")\n";
    }

    // 🔹 Withdraw Function Overloading
    void withdraw(double amount) {
        if (amount > balance) 
            cout << "Insufficient funds!\n";
        else {
            balance -= amount;
            cout << "Withdrawn: $" << amount << " (Remaining Balance: $" << balance << ")\n";
        }
    }
    void withdraw(int amount) { // Overloaded for integer withdrawals
        if (amount > balance) 
            cout << "Insufficient funds!\n";
        else {
            balance -= amount;
            cout << "Withdrawn: $" << amount << " (Remaining Balance: $" << balance << ")\n";
        }
    }

    // 🔹 Operator Overloading (Compare Balance Between Two Accounts)
    bool operator>(const BankAccount& other) {
        return this->balance > other.balance;
    }

    // 🔹 Display Account Details
    void showAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

// 🔹 Main Function
int main() {
    BankAccount acc1("123456", 5000.75);  // Account with initial balance
    BankAccount acc2("789012");           // Account with zero balance

    acc1.showAccountInfo();
    acc2.showAccountInfo();

    // Depositing money
    acc1.deposit(1200.50);
    acc2.deposit(3000);

    // Withdrawing money
    acc1.withdraw(2000);
    acc2.withdraw(3500); // Will trigger "Insufficient funds"

    // 🔹 Comparing Accounts
    if (acc1 > acc2)
        cout << "Account 1 has more balance than Account 2\n";
    else
        cout << "Account 2 has more balance than Account 1\n";

    return 0;
}
