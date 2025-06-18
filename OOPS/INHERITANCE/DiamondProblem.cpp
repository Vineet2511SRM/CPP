// This program explains DiamondProblem in cpp

#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "Class A" << endl; }
};

class B : virtual public A {};  // Virtual Inheritance
class C : virtual public A {};  // Virtual Inheritance

class D : public B, public C {};  // No duplicate A now

int main() {
    D obj;
    obj.show();  //  Works fine, only one A exists
    return 0;
}
