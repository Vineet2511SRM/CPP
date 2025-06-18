// This program explains concept of single inheritance in C++.

#include <iostream>
using namespace std;

class Animal { // Base class
    public:
        void eat() {
            cout << "Animal is Eating..." << endl;
        }

};

class Dog : public Animal { // Dog class inherits Animal class
    public:
        void bark() {
            cout << "Dog is Barking..." << endl;
        }
};

int main() {
    Dog d1; // Creating object of Dog class
    d1.eat(); // Accessing eat() function of Animal class which is base class
    d1.bark(); // Accessing bark() function of Dog class which is derived class

    return 0;
}