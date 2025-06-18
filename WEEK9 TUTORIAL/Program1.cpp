#include <iostream>
using namespace std;

int main() {
    double numerator, denominator, result;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            throw runtime_error("Error: Division by zero is not allowed.");
        }
        result = numerator / denominator;
        cout << "Result: " << result << endl;
    } catch (const exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}
