#include<iostream>
using namespace std;

class MyClass {
    public:
        int publicVar; // can be accessed from anywhere
        void publicFunc() { // can be accessed from anywhere
            cout << "Public Function" << endl;
        }
    private:
        int privateVar; // can only be accessed from within the class
        void privateFunc() { // can only be accessed from within the class
            cout << "Private Function" << endl;
        }
    protected:
        int protectedVar; // can be accessed within class and from derived classes
        void protectedFunc() { // can be accessed within class and from derived classes
            cout << "Protected Function" << endl;
        }
};

class DerivedClass : public MyClass {
    public:
        void accessProtectedMembers() {
            protectedVar = 30;
            protectedFunc();
        }
};

int main(){
    MyClass obj;
    obj.publicVar = 10;
    obj.publicFunc();
    // obj.privateVar = 20; // Error: privateVar is private
    // obj.privateFunc(); // Error: privateFunc is private
    // obj.protectedVar = 30; // Error: protectedVar is protected
    // obj.protectedFunc(); // Error: protectedFunc is protected

    DerivedClass derivedObj;
    derivedObj.accessProtectedMembers();

    return 0;
}