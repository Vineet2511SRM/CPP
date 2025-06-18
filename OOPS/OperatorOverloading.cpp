#include<iostream>
using namespace std;

class Test {
    private:
        int num;
    public:
        Test(): num(8) {} // Default Constructor
        void operator ++() { // Operator Overloading
            num = num + 2; // Increment num by 2
        }
        void display() {
            cout << "The Count is: " << num << endl;
        }
};

int main() {
    Test t; // t is an object of class Test
    ++t; // Operator Overloading
    t.display();
    return 0;
}