#include <iostream>
#include <exception>
using namespace std;

// Step 1: Create your own exception class
class NegativeValueException : public exception {
public:
    const char* what() const noexcept override {
        return "Deposit failed: Amount cannot be negative.";
    }
};

// Step 2: Function to handle deposit
void deposit(double amount) {
    if (amount < 0) {
        throw NegativeValueException(); // Throw custom exception
    }
    cout << "Rs." << amount << " deposited successfully." << endl;
}

// Step 3: Main function
int main() {
    double amount;
    cout << "Enter amount to deposit: Rs. ";
    cin >> amount;

    try {
        deposit(amount);
    } catch (const NegativeValueException& e) {
        cout << e.what() << endl;
    } catch (const exception& e) {
        cout << "Unexpected error: " << e.what() << endl;
    }

    return 0;
}
