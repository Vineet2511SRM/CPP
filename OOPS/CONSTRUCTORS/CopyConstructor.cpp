#include<iostream>
using namespace std;

class Example {
    public:
        int a;
        Example() {
            cout << "Default Constructor" << endl;
        }
        Example(int x) : a(x) {}
        
        Example(Example &obj): a(obj.a) {}
};

int main() {
    Example obj; // Default Constructor
    Example obj1(30); // Parameterized Constructor
    Example obj2(obj1); // Copy Constructor
    cout << obj2.a;
    return 0;
}

