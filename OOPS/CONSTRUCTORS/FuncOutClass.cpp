#include<iostream>
using namespace std;

// declare a class
class MyClass {
    public:
        // Function declaration within the class
        void printMessage();
};

// Function definition outside the class
void MyClass::printMessage() {
    cout << "Hello from MyClass" << endl;
}

int main(){
    // Creating an object of class MyClass
    MyClass obj;
    // Calling the function using the object
    obj.printMessage();
    return 0;
}