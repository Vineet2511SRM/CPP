#include <iostream>

int main() {
    int n;
    int sum = 0;
    int count = 0;
    int num;

    // Input the number of integers (n)
    std::cout << "Enter the number of integers (n): ";
    std::cin >> n;

    // Ensure n is a positive integer
    if (n <= 0) {
        std::cout << "Invalid input for n. It must be a positive integer." << std::endl;
        return 1; // Exit with error code 1
    }

    // Read n integers and calculate their sum using do-while loop
    do {
        std::cout << "Enter integer #" << (count + 1) << ": ";
        std::cin >> num;
        sum += num;
        count++;
    } while (count < n);

    // Output the sum of n integers
    std::cout << "Sum of the " << n << " integers is: " << sum << std::endl;

    return 0;
}
