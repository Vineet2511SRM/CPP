// EMPLOYEE MANAGEMENT SYSTEM implementing copy constructor

#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    float empSalary;
    string empDesignation;

public:
    // Parameterized constructor to initialize employee details
    Employee(int id, const string& name, float salary, const string& designation) {
        empID = id;
        empName = name;
        empSalary = salary;
        empDesignation = designation;
    }

    // Copy constructor to copy details of another employee
    Employee(const Employee& emp) {
        empID = emp.empID;
        empName = emp.empName;
        empSalary = emp.empSalary;
        empDesignation = emp.empDesignation;
    }

    // Function to display employee details
    void displayEmployeeInfo() {
        cout << "----------------------------------" << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Salary: $" << empSalary << endl;
        cout << "Designation: " << empDesignation << endl;
        cout << "----------------------------------" << endl;
    }
};

int main() {
    // Creating an Employee object E1 using parameterized constructor
    Employee E1(101, "John Doe", 50000, "Software Developer");

    // Creating another Employee E2 as a copy of E1 using copy constructor
    Employee E2 = E1;

    // Displaying details of both employees
    cout << "Employee 1 Details:" << endl;
    E1.displayEmployeeInfo();
    cout << endl;

    cout << "\nEmployee 2 (Copied) Details:" << endl;
    E2.displayEmployeeInfo();
    cout << endl;

    return 0;
}