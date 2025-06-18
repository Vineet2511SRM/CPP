#include <iostream>
#include <stdexcept>
using namespace std;

void processTransaction(int amount) {
    if (amount < 0) {
        throw invalid_argument("Error: Negative transaction amount.");
    }
    cout << "Transaction processed for amount: " << amount << endl;
}

void handleTransaction(int amount) {
    try {
        processTransaction(amount);
    } catch (const exception& e) {
        throw; // Rethrow the exception
    }
}

int main() {
    int transactionAmount;
    cout << "Enter transaction amount: ";
    cin >> transactionAmount;

    try {
        handleTransaction(transactionAmount);
    } catch (const exception& e) {
        cout << "Caught in main: " << e.what() << endl;
    }

    return 0;
}