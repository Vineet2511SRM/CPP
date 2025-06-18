
//Task: Design a UserAccount class with a static variable adminCount to track the number of admin accounts created. Implement a static method getAdminCount() to return the current number of admins.
#include <iostream>
using namespace std;

class UserAccount {
private:
    static int adminCount; // Static variable to track admin accounts

public:
    UserAccount(bool isAdmin) {
        if (isAdmin) {
            adminCount++;
        }
    }
    static int getAdminCount() {
        return adminCount;
    }
};

int UserAccount::adminCount = 0;

int main() {
    UserAccount admin1(true);
    UserAccount admin2(true);
    UserAccount user1(false);
    
    cout << "Admin count: " << UserAccount::getAdminCount() << endl;
    
    return 0;
}
