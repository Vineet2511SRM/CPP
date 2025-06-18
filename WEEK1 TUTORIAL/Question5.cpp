#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // a. Print 45.6789 in width 10, right-justified, 3 decimal places
    cout << setw(10) << right << fixed << setprecision(3) << 45.6789 << endl;

    // b. Display 0.00034567 in scientific notation with 6 decimal places
    cout << scientific << setprecision(6) << 0.00034567 << endl;

    // c. Print 255 as hexadecimal (uppercase)
    cout << hex << uppercase << 255 << endl;

    // d. Print 987.654321 as fixed-point with 4 decimal places
    cout << fixed << setprecision(4) << 987.654321 << endl;

    // e. Display -123.456 as exponential with 4 decimal places
    cout << scientific << setprecision(4) << -123.456 << endl;

    return 0;
}
