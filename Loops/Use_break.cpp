#include <iostream>
using namespace std;
int main() {
    int num = 5; // Starting from the first multiple of 5
    while (true) {
        if (num % 7 == 0) { // Check if num is also a multiple of 7
            cout << "The first multiple of 5 which is also a multiple of 7 is: " <<num<<endl;
            break;
        }
        num += 5; // Increment by 5 to check the next multiple of 5
    }
    return 0;
}
