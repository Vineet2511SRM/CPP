#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    float balance;

public:
    // Constructor
    BankAccount(int accNum, const string& accHolderName, float bal) {
        accountNumber = accNum;
        accountHolderName = accHolderName;
        balance = bal;
    }

    // Function to deposit money
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(float amount) {
        if (amount > 0) {
            if (balance - amount >= 0) {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            } else {
                cout << "Insufficient balance to withdraw " << amount << endl;
            }
        } else {
            cout << "Withdrawal amount must be positive!" << endl;
        }
    }

    // Function to display account details
    void display() const {
        cout << "----------------------------------" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
        cout << "----------------------------------" << endl;
    }
};

int main() { 
    int accNum;
    string accHolderName;
    float initialBalance;

    // Taking user input for account details
    cout << "Enter Account Number: ";
    cin >> accNum;
    cin.ignore();  // Ignore newline character
    cout << "Enter Account Holder Name: ";
    getline(cin, accHolderName);
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    // Creating a user-defined BankAccount object
    BankAccount account1(accNum, accHolderName, initialBalance); 

    float depositAmount, withdrawAmount;

    // Performing deposit
    cout << "Enter amount to deposit: ";
    cin >> depositAmount;
    account1.deposit(depositAmount);
    
    // Performing withdrawal
    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    account1.withdraw(withdrawAmount);
    
    // Displaying final account details
    account1.display();
    
    return 0;
}

/*SAMPLE INPUT 1 : 
Enter Account Number: 1011
Enter Account Holder Name: VINEET SETH
Enter Initial Balance: 50000
Enter amount to deposit: 5500
Deposited: 5500
Enter amount to withdraw: 15000
Withdrawn: 15000*/

/*SAMPLE OUTPUT 1 :
----------------------------------
Account Number: 1011
Account Holder Name: VINEET SETH    
Balance: 40500
----------------------------------

SAMPLE INPUT 2 :
Enter Account Number: 1012
Enter Account Holder Name: RAVI KUMAR
Enter Initial Balance: 10000
Enter amount to deposit: 5000
Deposited: 5000
Enter amount to withdraw: 20000
Insufficient balance to withdraw 20000*/

/*SAMPLE OUTPUT 2 :
----------------------------------
Account Number: 1012
Account Holder Name: RAVI KUMAR
Balance: 15000
----------------------------------*/
