#include <iostream>
using namespace std;

// Class template for Calculator
template <typename T>
class Calculator {
private:
    T a, b;  // Member variables to store values

public:
    // Constructor to initialize the values
    Calculator(T val1, T val2) : a(val1), b(val2) {}

    // Member function for addition
    T add() {
        return a + b;
    }

    // Member function for subtraction
    T subtract() {
        return a - b;
    }

    // Member function for multiplication
    T multiply() {
        return a * b;
    }

    // Member function for division
    T divide() {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    // Demonstrate with integers
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;

    Calculator<int> intCalculator(int1, int2);  // Integer Calculator

    cout << "Addition: " << intCalculator.add() << endl;
    cout << "Subtraction: " << intCalculator.subtract() << endl;
    cout << "Multiplication: " << intCalculator.multiply() << endl;
    cout << "Division: " << intCalculator.divide() << endl;

    // Demonstrate with floating-point numbers
    float f1, f2;
    cout << "\nEnter two floating-point numbers: ";
    cin >> f1 >> f2;

    Calculator<float> floatCalculator(f1, f2);  // Float Calculator

    cout << "Addition: " << floatCalculator.add() << endl;
    cout << "Subtraction: " << floatCalculator.subtract() << endl;
    cout << "Multiplication: " << floatCalculator.multiply() << endl;
    cout << "Division: " << floatCalculator.divide() << endl;

    return 0;
}
