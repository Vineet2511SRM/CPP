#include<iostream>
#include<string>
using namespace std;

class Employee {
    private:
        int id;
        string name;
        int age;
        double salary;
    public:
        // Default Constructor
        Employee() : id(0), name("No Name"), age(0), salary(0.0) {
            cout << "Default Constructor called for employee with ID: " << id << endl;
        }

        // Parameterized Constructor
        Employee(int empId, string empName, int empAge, double empSalary) : id(empId), name(empName), age(empAge), salary(empSalary) {
            cout << "Parameterized Constructor called for employee with ID: " << id << endl;
        }

        // Function to display employee details
        void display() {
            cout << "Employee ID: " << id << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Age: " << age << endl;
            cout << "Employee Salary: " << salary << endl;
        }
        
        // Function to update employee details
        void updateSalary (double newSalary) {
            salary = newSalary;
            cout<< "Salary updated for employee with ID: " << id << " to " << salary << endl; 
        }
};

int main() {
    // Case 1: Create an employee using default constructor
    Employee emp1;
    emp1.display();

    // Update salary for employee created with default constructor
    emp1.updateSalary(50000.50);
    emp1.display();
    cout<< endl;

    // Case 2: Create an employee using parameterized constructor
    Employee emp2(101, "Vineet Seth", 25, 50000.50);
    emp2.display();

    // Update salary for employee created with parameterized constructor
    emp2.updateSalary(60000.50);
    emp2.display();

    return 0;
}