#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter first integer....: ";
    cin >> num1;
    cout << "Enter second integer....: ";
    cin >> num2;

    int product = num1 * num2;
    cout << "Product - " << product << endl;

    int temp = product;
    if (temp == 0) 
    {
        cout << "Count of digits - 1"; // Special case for 0
        return 0;
    }

    int digits = 0;
    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }
    
    cout << "Count of digits - " << digits;
    return 0;
}
