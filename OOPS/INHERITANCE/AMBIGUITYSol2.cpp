#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "Class A" << endl; }
};

class B {
public:
    void show() { cout << "Class B" << endl; }
};

class C : public A, public B {
public:
    void show() { cout << "Class C (Overridden)" << endl; }  // Overriding show() solution 2 for ambiguity
};

int main() {
    C obj;
    obj.show();  // Calls overridden show() in class C
    return 0;
}
