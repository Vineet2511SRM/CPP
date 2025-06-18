#include<iostream>
using namespace std;

class Student {
    public:
        int id; //data member
        string name; //data member
};

int main() {
    Student s1, s2; // s1 and s2 are objects of class Student   
    s1.id = 18;
    s1.name = "John";
    s2.id = 21;
    s2.name = "Doe";
    cout<<"Student 1: "<<s1.id<<" "<<s1.name<<endl;
    cout<<"Student 2: "<<s2.id<<" "<<s2.name<<endl;
    return 0;

}