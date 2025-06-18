#include<iostream>
using namespace std;

class Person {  // Create Person Class
    private :
        int age;
    public :
        // 1. Constructor with no arguments
        Person() {
            age = 17; // when object is created the age will be set to 17
        }

        // 2. Constructor with one argument
        Person(int a) {
            age = a; // when object is created the age will be set to the value of a
        }

        intgetAge() { // Function to get the age
            return age;
        }
};

int main() {
    // Create objects of class Person
    Person p1; // Object created with no arguments
    Person p2(25); // Object created with one argument
    cout << "Age of p1: " << p1.intgetAge() << endl;
    cout << "Age of p2: " << p2.intgetAge() << endl;
    return 0;
}