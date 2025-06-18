#include <iostream>
#include <exception>
using namespace std;

// Class to simulate 'finally' block using RAII
class CleanupGuard {
public:
    ~CleanupGuard() {
        // Cleanup code that always runs
        cout << "Cleanup done." << endl;
    }
};

void processData(bool triggerError) {
    CleanupGuard cleanup;  // RAII object created

    cout << "Processing sensitive data..." << endl;

    if (triggerError) {
        throw runtime_error("An error occurred during processing.");
    }

    cout << "Data processed successfully." << endl;
}

int main() {
    try {
        // Change to true to simulate an exception
        processData(true);
    } catch (const exception &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
