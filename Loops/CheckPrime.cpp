#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number to check whether it is prime or not:";
    cin>>num;

    bool a = 0;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            cout<<num<<" is not a prime number";
            a = 1;
            break;
        }
    }
        if(a==0){
            cout<<num<<" is a prime number";
        }
    
        return 0;
    }
