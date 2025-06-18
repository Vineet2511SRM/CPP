#include<iostream>
using namespace std;
#include<cmath>
class GeometryCalculator {
    public :
        // Function to calculate the area of a circle
        static double CalculateRectangleArea(double length, double breadth) {
            return length * breadth;
        }

        // Function to calculate the perimeter of a circle
        static double CalculateRectanglePerimeter(double length, double breadth) {
            return 2 * (length + breadth);
        }

        // Function to calculate the area of a circle
        static double CalculateCircleArea(double radius) {
            return 3.14 * radius * radius;
        }

        // Function to calculate the perimeter of a circle
        static double CalculateCirclePerimeter(double radius) {
            return 2 * 3.14 * radius;
        }

        // Function to calculate the area of a triangle using Heron's formula
        static double CalculateTriangleArea(double sideA, double sideB, double sideC) {
            double s = (sideA + sideB + sideC) / 2;
            return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
        }
};

int main () {
    double length = 5.0;
    double breadth = 3.0;
    double radius = 4.0;
    double sideA = 7.0;
    double sideB = 24.0;
    double sideC = 25.0;

    GeometryCalculator gc;

    // Rectangle Calculations
    cout << "Area of Rectangle: " << gc.CalculateRectangleArea(length, breadth) << endl;
    cout << "Perimeter of Rectangle: " << gc.CalculateRectanglePerimeter(length, breadth) << endl;

    // Circle Calculations
    cout << "Area of Circle: " << gc.CalculateCircleArea(radius) << endl;
    cout << "Perimeter of Circle: " << gc.CalculateCirclePerimeter(radius) << endl;

    // Triangle Calculations
    cout << "Area of Triangle: " << gc.CalculateTriangleArea(sideA, sideB, sideC) << endl;

    return 0;
}