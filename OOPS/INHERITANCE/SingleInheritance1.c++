// This program explains concept of single inheritance in C++.

#include <iostream>
using namespace std;

class Account { // Base class
    public:
        float salary = 85000;
};

class Programmer : public Account { // Programmer class inherits Account class
    public:
        float bonus = 5000;
};

int main() {
    Programmer p1; // Creating object of Programmer class
    cout << "Salary: " << p1.salary << endl;
    cout << "Bonus: " << p1.bonus << endl;

    return 0;
}