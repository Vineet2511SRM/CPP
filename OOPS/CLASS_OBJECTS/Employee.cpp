#include<iostream>
using namespace std;

class Employee {
    private : 
        int id;
        string name;
        float salary;
    public :
        void insert(int i, string n, float s) {
            id = i;
            name = n;
            salary = s;
        }
        void display() {
            cout<<"Employee ID: "<<id<<endl;
            cout<<"Employee Name: "<<name<<endl;
            cout<<"Employee Salary: "<<salary<<endl;
        }
};

int main (){
    Employee e1,e2,e3;
    e1.insert(101,"Vineet Seth", 50000.50);
    e2.insert(102,"Rahul Singh", 45000.50);
    e3.insert(103,"Rajesh Kumar", 40000.50);
    e1.display();
    e2.display();
    e3.display();
    return 0;
}