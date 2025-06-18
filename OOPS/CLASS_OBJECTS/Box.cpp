#include<iostream>
using namespace std;

class Box {
    public :
        double lenght;
        double breadth;
        double height;
};

int main() {
    Box box1;
    Box box2;
    double volume = 0.0;
    // box1 specification
    box1.lenght = 5.0;
    box1.breadth = 6.0;
    box1.height = 7.0;

    // box2 specification
    box2.lenght = 10.0;
    box2.breadth = 12.0;
    box2.height = 13.0;

    // volume of box1
    volume = box1.lenght * box1.breadth * box1.height;
    cout << "Volume of box1: " << volume << endl;

    // volume of box2
    volume = box2.lenght * box2.breadth * box2.height;
    cout << "Volume of box2: " << volume << endl;

    return 0;
}