//using if-else if for dividing people into different age groups
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter age.....:"<<endl;
    int age;
    cin>>age;
    if (age<12){
        cout<<"Person is a child...."<<endl;
    }
    else if(age>18){
        cout<<"Person is an adult...."<<endl;
    }
    else {
        cout<<"Person is a teenager....."<<endl;
    }

    return 0;

}