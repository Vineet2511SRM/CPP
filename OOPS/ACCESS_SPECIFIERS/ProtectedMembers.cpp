// Explaining the use of protected access specifier in C++.

#include <iostream>
using namespace std;

class Box { // Base class
    protected : 
        double width;
};

class SmallBox :  Box { // 
    public:
        void setWidth(double wid);
        double getWidth(void);
};

// Member functions of child class
double SmallBox::getWidth(void) { // Function to get width
    return width;
}

void SmallBox::setWidth(double wid) { // Function to set width
    width = wid;
}

// Main function for the program
int main() {
    SmallBox box; // Create object of child class

    // Set box width using member function
    box.setWidth(10.0); // Use member function to set width
    cout << "Width of box: " << box.getWidth() << endl; // Get width using member function because width is protected
 
    return 0;
}