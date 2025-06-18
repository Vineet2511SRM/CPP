#include<iostream>
using namespace std;

class ComplexMultiplication {
    private:
        float real;
        float imaginary;

    public:
        // Function to set the real and imaginary parts of the complex number
        void setValues(float r, float i) {
            real = r;
            imaginary = i;
        }
    // Static function to multiply two complex numbers using two arguments
        static ComplexMultiplication multiply(const ComplexMultiplication& c1, const ComplexMultiplication& c2) {
            ComplexMultiplication result;
            result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
            result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
            return result;
        }
    // Function to display the complex number
        void display() {
            if (imaginary>=0){
                cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
        }
            else {
                cout << "Complex Number: " << real << " - " << -imaginary << "i" << endl;
            }
        }
};

int main() {
    ComplexMultiplication c1, c2, result;
    float real1, imaginary1, real2, imaginary2;
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real1 >> imaginary1;
    c1.setValues(real1, imaginary1);
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real2 >> imaginary2;
    c2.setValues(real2, imaginary2);
    result = ComplexMultiplication::multiply(c1, c2);
    cout << "Product of the two complex numbers: " << endl;
    result.display();
    return 0;
}