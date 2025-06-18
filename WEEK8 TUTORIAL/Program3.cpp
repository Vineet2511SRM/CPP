// Function template for generic storage
#include <iostream>
using namespace std;

// Class template
template <typename T>
class Storage {
private:
    T value;

public:
    Storage(T val) : value(val) {}

    void display() {
        cout << "Stored value: " << value << endl;
    }
};

int main() {
    // Integer storage
    Storage<int> intStorage(100);
    intStorage.display();

    // Float storage
    Storage<float> floatStorage(45.67f);
    floatStorage.display();

    // String storage
    Storage<string> stringStorage("Hello, Vineet!");
    stringStorage.display();

    return 0;
}
