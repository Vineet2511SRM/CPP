#include <iostream>
using namespace std;

int main()
{
    int number;

    for(;;) // Infinite loop, will exit if condition is met
    {
        cout << "Enter a number: ";
        cin >> number;

        
        if (number % 2 == 0 && number % 3 == 0)
        {
            cout << "EXIT" << endl;
            break; // Exit the loop
        }

        
        int cube = number * number * number;
        cout << "Cube of " << number << " is : " << cube << endl;
    }

    return 0;
}
