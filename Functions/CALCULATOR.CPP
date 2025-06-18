#include <iostream>

using namespace std;

// Function declarations
void addition(float a, float b);
void subtraction(float a, float b);
void multiplication(float a, float b);
void division(float a, float b);
void remainder(int a,int b);

int main() {
    float num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /,%): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            addition(num1, num2);
            break;
        case '-':
            subtraction(num1, num2);
            break;
        case '*':
            multiplication(num1, num2);
            break;
        case '/':
            division(num1, num2);
            break;
        case '%':
            remainder(num1,num2);
            break;
        default:
            // If the operator is invalid
            cout << "Error! Invalid operator.";
            break;
    }

    return 0;
}

// Function definitions
void addition(float a, float b) {
    cout << "Result: " << a + b << endl;
}

void subtraction(float a, float b) {
    cout << "Result: " << a - b << endl;
}

void multiplication(float a, float b) {
    cout << "Result: " << a * b << endl;
}

void division(float a, float b) {
    if (b != 0) {
        cout << "Result: " << a / b << endl;
    } else {
        cout << "Error! Division by zero is not allowed." << endl;
    }
}
void remainder(int a,int b){
    cout<<"Result: "<<a%b<<endl;
}

