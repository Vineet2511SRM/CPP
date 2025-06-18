#include<iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imaginary;
    public:
        // constructor to initialize a complex number
        Complex(double r, double i) : real(r), imaginary(i) {}

        // Function to add two complex numbers
        static Complex add(Complex& c1, Complex& c2) {
            double sumReal = c1.real + c2.real; // Adding the real parts by accessing the private members
            double sumImaginary = c1.imaginary + c2.imaginary; // Adding the imaginary parts by accessing the private members
            return Complex(sumReal, sumImaginary); // Returning the sum as a new complex number using the constructor
        }

        // Function to display the complex number
        void display() {
            if (imaginary >= 0) {
                cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
            } else {
                cout << "Complex Number: " << real << " - " << -imaginary << "i" << endl;
            }
        }
};

int main(){
    double userReal, userImaginary;
    cout << "Enter a complex number (real part): ";
    cin >> userReal;
    cout << "Enter a complex number (imaginary part): ";
    cin >> userImaginary;

    // Creating a complex number using user's input
    Complex userComplex(userReal, userImaginary);

    // Creating another complex number using the constructor
    Complex c1(3.0, 4.0);

    // Adding the two complex numbers
    Complex result = Complex::add(userComplex, c1);

    cout << "User's Complex Number: " << endl;
    userComplex.display();

    cout<< "Complex Number from the constructor: " << endl;
    c1.display();

    cout << "Sum of the two complex numbers: " << endl;
    result.display();

    return 0;

}