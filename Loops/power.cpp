//Given 2 numbers a and b.. printing a raise to the power b
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter first number....:";
    cin>>a;
    cout<<"Enter second number....:";
    cin>>b;

    int result = 1;
    for(int i = 1;i<=b;i++){
        result = result*a;
    }
    cout<<a<<" raise to the power "<<b<<" is:"<<result<<endl;
    return 0;
}