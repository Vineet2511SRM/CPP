#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks; // to store marks
    int mark;

    // Add marks of 5 students
    cout << "Enter marks for 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> mark;
        marks.push_back(mark);
    }

    // Print mark of the 3rd student (index 2)
    if (marks.size() >= 3) {
        cout << "\nMark of the 3rd student: " << marks[2] << endl;
    } else {
        cout << "Less than 3 students entered." << endl;
    }

    return 0;
}
