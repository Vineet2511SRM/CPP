#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int lower_lim = 50, upper_lim = 1000;

    cout << "Armstrong numbers between " << lower_lim << " and " << upper_lim << " are:\n";

    for (int n = lower_lim; n <= upper_lim; n++) {
        int sum = 0;
        int original_n = n;
        int temp = n;

        // Calculate the sum of cubes of digits
        while (temp > 0) {
            int last_digit = temp % 10;
            sum += round(pow(last_digit, 3));
            temp /= 10;
        }

        // Check if the sum is equal to the original number
        if (sum == original_n) {
            cout << original_n << " ";
        }
    }

    cout << endl;
    return 0;
}
