#include <iostream>
using namespace std;

class Subscription {
private:
    string status; // Holds the subscription status

public:
    // Default constructor: Sets initial status to "Inactive"
    Subscription() {
        status = "Inactive Subscription";
        cout << status << endl;
    }

    // Parameterized constructor: Updates status based on renewal
    Subscription(bool isRenewed) {
        if (isRenewed)
            status = "Subscription Active";
        else
            status = "Subscription Expired";

        cout << status << endl;
    }
};

int main() {
    // Step 1: New user registers
    Subscription user1; // Calls default constructor (prints "Inactive Subscription")

    // Simulating a month later, user decides to renew (true) or not (false)
    bool isRenewed;
    cout << "Has the user renewed the subscription? (1 for Yes, 0 for No): ";
    cin >> isRenewed;

    // Step 2: Updating subscription after a month
    Subscription user1_update(isRenewed); // Calls parameterized constructor

    return 0;
}
