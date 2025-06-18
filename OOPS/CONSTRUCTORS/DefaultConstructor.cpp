#include<iostream>
using namespace std;

class Employee {
    public :
        Employee() {
            cout<<"Testing default constructor"<<endl;
        }
};

int main(){
    Employee e1;
    Employee e2;
    return 0;
}