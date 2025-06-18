#include <iostream>
using namespace std;

// Function template
template <typename T>
void display(T value) {
    cout << "Value: " << value << endl;
}

int main() {
    int i;
    float f;
    string s;

    cout << "Enter an integer: ";
    cin >> i;

    cout << "Enter a float: ";
    cin >> f;

    cout << "Enter a string: ";
    cin.ignore();           // To clear newline left in the buffer
    getline(cin, s);        // To read a full line including spaces

    display(i);  // int
    display(f);  // float
    display(s);  // string

    return 0;
}
