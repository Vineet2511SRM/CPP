#include <iostream>
using namespace std;

class constOver {
    int num1, num2;

public:
    // Default Constructor
    constOver() : num1(0), num2(0) {
        cout << "Default Constructor" << endl;
    }

    // Parameterized Constructor
    constOver(int a, int b) : num1(a), num2(b) {
        cout << "Parameterized Constructor" << endl;
    }

    // Copy Constructor
    constOver(const constOver &obj) : num1(obj.num1), num2(obj.num2) {
        cout << "Copy Constructor" << endl;
    }

    // Display Function
    void display() {
        cout << "Num1: " << num1 << " Num2: " << num2 << endl;
    }

    // Operator Overloading for '+'
    int operator+(constOver &obj) {
        return num1 + obj.num1;
    }
};

int main() {
    constOver obj; // Creating a default constructor object
    constOver obj1(10, 20); // Parameterized Constructor
    constOver obj2(obj1); // Copy Constructor

    obj1.display();
    obj2.display();

    int sum = obj1 + obj2;
    cout << "Sum of num1 values: " << sum << endl;

    return 0;
}
