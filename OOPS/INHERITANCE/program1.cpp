// This program dictates about the concept of Inhertiace in C++.

#include <iostream>
using namespace std;

class Person {
protected: // Access specifier
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person { // Derived class
private:
    int rollNo;

public:
    Student(string n, int a, int r) : Person(n, a) {
        rollNo = r;
    }

    void display() {
        Person::display();
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s("Alice", 20, 101);
    s.display();

    return 0;
}
