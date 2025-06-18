#include <iostream>
using namespace std;

// Abstract base class
class Student {
public:
    virtual void study() = 0;  // Pure virtual function makes this class abstract
};

// Derived class: Undergraduate
class Undergraduate : public Student {
public:
    void study() override {
        cout << "Undergraduate student studies general subjects and attends labs." << endl;
    }
};

// Derived class: Postgraduate
class Postgraduate : public Student {
public:
    void study() override {
        cout << "Postgraduate student focuses on research and specialized subjects." << endl;
    }
};

int main() {
    Student* s1;  // Base class pointer

    Undergraduate ug;
    Postgraduate pg;

    s1 = &ug;
    s1->study();  // Output: Undergraduate student studies general subjects...

    s1 = &pg;
    s1->study();  // Output: Postgraduate student focuses on research...

    return 0;
}
