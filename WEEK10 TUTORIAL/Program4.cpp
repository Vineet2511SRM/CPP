#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> typedWords; // Stack to store typed words

    // Typing three words
    typedWords.push("Hello");
    typedWords.push("World");
    typedWords.push("Test");

    // Displaying the words typed
    cout << "Words typed:\n";
    stack<string> temp = typedWords;  // Copy the stack to display
    while (!temp.empty()) {
        cout << temp.top() << endl;
        temp.pop();
    }

    // Undo the last typed word
    if (!typedWords.empty()) {
        typedWords.pop(); // Removes the last typed word ("Test")
    }

    // Displaying the remaining words after undo
    cout << "\nWords after undo:\n";
    temp = typedWords;  // Copy the stack again to display the updated list
    while (!temp.empty()) {
        cout << temp.top() << endl;
        temp.pop();
    }

    return 0;
}
