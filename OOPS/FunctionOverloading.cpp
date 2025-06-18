#include<iostream>
using namespace std;

class Cal {
    public:
        static int add(int a, int b) {
            return a + b;
        }
        static int add(int a, int b, int c) {
            return a + b + c;
        }
};

int main() {
    Cal c; // c is an object of class Cal
    cout << "Sum of 2 numbers: " << c.add(10, 20) << endl;
    cout << "Sum of 3 numbers: " << c.add(10, 20, 30) << endl;
    return 0;
}