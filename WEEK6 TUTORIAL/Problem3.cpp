#include <iostream>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;

public:
    // Function to set name
    void setName(string n) {
        name = n;
    }

    // Function to display name
    void displayName() {
        cout << "Name: " << name << endl;
    }
};

// Derived class: Teacher (inherits from Person)
class Teacher : public Person {
protected:
    string subject;

public:
    // Function to set subject
    void setSubject(string s) {
        subject = s;
    }

    // Function to display subject
    void displaySubject() {
        cout << "Subject: " << subject << endl;
    }
};

// Further derived class: Professor (inherits from Teacher)
class Professor : public Teacher {
private:
    string department;

public:
    // Function to set department
    void setDepartment(string d) {
        department = d;
    }

    // Function to display department
    void displayDetails() {
        displayName();
        displaySubject();
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Create an object of Professor
    Professor prof;

    // Set values for name, subject, and department
    prof.setName("Dr. Rahul Sharma");
    prof.setSubject("Computer Science");
    prof.setDepartment("Artificial Intelligence");

    // Display details of the professor
    cout << "Professor Details:" << endl;
    prof.displayDetails();

    return 0;
}
