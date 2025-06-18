// This program explains the concept of Multi-Level Inheritance in C++.

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

class PuppyDog : public Dog { // PuppyDog class inherits Dog class
public:
    void weep() {
        cout << "PuppyDog is Weeping..." << endl;
    }
};

int main() {
    PuppyDog pd1; // Creating object of PuppyDog class
    pd1.eat(); // Accessing eat() function of Animal class which is base class
    pd1.bark(); // Accessing bark() function of Dog class which is derived class
    pd1.weep(); // Accessing weep() function of PuppyDog class which is derived class

    return 0;
}

// Sample Output:
// Animal is Eating...
// Dog is Barking...
// PuppyDog is Weeping...
