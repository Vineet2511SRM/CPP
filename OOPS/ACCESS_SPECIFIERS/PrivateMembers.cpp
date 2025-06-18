#include <iostream>
using namespace std;

class Box {
public:
    double length;
    void setWidth(double width);
    double getWidth(void);

private:
    double width;  // Fixed spelling mistake
};

// Member function definitions
void Box::setWidth(double width) {
    this->width = width;  // Assign value correctly using 'this' pointer
}

double Box::getWidth(void) {
    return width;  // Correctly return the private width
}

// Main function for the program
int main() {
    Box box;

    // Set box length without member function
    box.length = 10.0; // OK: because length is public
    cout << "Length of box: " << box.length << endl;

    // Set box width using member function
    box.setWidth(10.0); // Use member function to set width
    cout << "Width of box: " << box.getWidth() << endl;

    return 0;
}
