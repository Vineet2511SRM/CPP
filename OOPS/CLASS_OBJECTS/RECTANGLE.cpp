#include<iostream>
using namespace std;

class Rectangle {
    public:
        int length;
        int breadth;
        int area() {
            return length * breadth;
        }
        int perimeter() {
            return 2 * (length + breadth);
        }
};

int main() {
    Rectangle r1, r2; // r1 and r2 are objects of class Rectangle
    r1.length = 10; // Accessing the data members of the object r1
    r1.breadth = 5;
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Perimeter of r1: " << r1.perimeter() << endl;
    r2.length = 15; // Accessing the data members of the object r2
    r2.breadth = 10;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Perimeter of r2: " << r2.perimeter() << endl;
    return 0;
}