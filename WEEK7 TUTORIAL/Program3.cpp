#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {  // Virtual function
        cout << "Drawing a shape..." << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle..." << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle..." << endl;
    }
};

int main() {
    Shape* shapePtr;         // Base class pointer

    Circle c;
    Rectangle r;

    shapePtr = &c;
    shapePtr->draw();        // Output: Drawing a circle...

    shapePtr = &r;
    shapePtr->draw();        // Output: Drawing a rectangle...

    return 0;
}
// This program demonstrates the use of virtual functions and polymorphism in C++.
