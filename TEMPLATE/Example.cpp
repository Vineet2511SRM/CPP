#include <iostream>
using namespace std;

// Function Template
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

// Class Template
template <class T>
class Calculator {
private:
    T num1, num2;
public:
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { 
        if (num2 != 0) return num1 / num2;
        throw runtime_error("Division by zero!");
    }
};

int main() {
    // Using function template
    cout << "Max of 4 and 7: " << findMax(4, 7) << endl;
    cout << "Max of 3.5 and 2.1: " << findMax(3.5, 2.1) << endl;

    // Using class template with int
    Calculator<int> calc1(10, 5);
    cout << "\nInteger Calculator:" << endl;
    cout << "Add: " << calc1.add() << endl;
    cout << "Subtract: " << calc1.subtract() << endl;
    cout << "Multiply: " << calc1.multiply() << endl;
    cout << "Divide: " << calc1.divide() << endl;

    // Using class template with float
    Calculator<float> calc2(10.5f, 4.5f);
    cout << "\nFloat Calculator:" << endl;
    cout << "Add: " << calc2.add() << endl;
    cout << "Subtract: " << calc2.subtract() << endl;
    cout << "Multiply: " << calc2.multiply() << endl;
    cout << "Divide: " << calc2.divide() << endl;

    return 0;
}
