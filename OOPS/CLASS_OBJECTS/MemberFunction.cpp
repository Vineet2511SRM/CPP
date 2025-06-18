#include<iostream>
using namespace std;

class MemberFunction_Student {
    private:
        int id; //data member
        string name; //data member
    public:
        void insert(int i,string n) {
            id = i;
            name = n;
        }
        void display() {
            cout<<"Student ID: "<<id<<endl;
            cout<<"Student Name: "<<name<<endl;
        }
    };

int main (){
    MemberFunction_Student s1, s2; // s1 and s2 are objects of class Student   
    s1.insert(18,"Virat Kohli");
    s2.insert(45, "Rohit Sharma");
    s1.display();
    s2.display();
    return 0;
}