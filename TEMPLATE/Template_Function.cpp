// This program will help to experience template  function

#include <iostream>
using namespace std;

template <typename T>
T concat(T n1, T n2) {
    return n1 + n2;
}

int main(){
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Concatenated result: " << concat(a, b) << endl;

    float x, y;
    cout << "Enter two floats: ";
    cin >> x >> y;
    cout << "Concatenated result: " << concat(x, y) << endl;

    string str1, str2;
    cout << "Enter two strings: ";
    cin >> str1 >> str2;
    cout << "Concatenated result: " << concat(str1, str2) << endl;

    return 0;
}