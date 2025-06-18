#include<iostream>
#include<cmath>
using namespace std;

class Circle {
    private:
        double radius;
    public:
        // Parameterized constructor for radius
        Circle(double r) : radius(r) {}

        // Function to calculate the area of the circle
        double calculateArea() {
            return 3.14 * radius * radius;
        }
};

int main(){
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Creating an object of class Circle
    Circle c(radius);

    // Displaying the area of the circle
    cout << "Area of the circle with radius " <<radius<< " is : " << c.calculateArea() << endl;

    return 0;
}