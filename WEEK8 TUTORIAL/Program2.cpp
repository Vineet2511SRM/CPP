#include <iostream>
using namespace std;

// Function template to find maximum
template <typename T>
void findMax(T a, T b) {
    T maxVal = (a > b) ? a : b;
    cout << "Maximum value: " << maxVal << endl;
}

int main() {
    int i1, i2;
    float f1, f2;
    double d1, d2;

    cout << "Enter two integers: ";
    cin >> i1 >> i2;
    findMax(i1, i2);

    cout << "Enter two floats: ";
    cin >> f1 >> f2;
    findMax(f1, f2);

    cout << "Enter two doubles: ";
    cin >> d1 >> d2;
    findMax(d1, d2);

    return 0;
}
