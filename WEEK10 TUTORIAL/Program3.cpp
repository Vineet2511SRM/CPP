#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Initialize deque with 5 students
    deque<string> canteenLine = {"John", "Sara", "Vikram", "Ananya", "Raj"};

    // Add "Amit" at the back
    canteenLine.push_back("Amit");

    // Add "Riya" (class representative) at the front
    canteenLine.push_front("Riya");

    // Remove a student from the front (who gets served)
    canteenLine.pop_front();

    // Display the updated line
    cout << "Updated Canteen Line:" << endl;
    for (const auto& student : canteenLine) {
        cout << "- " << student << endl;
    }

    return 0;
}
