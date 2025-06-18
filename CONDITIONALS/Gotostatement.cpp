#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a%2==0){
        goto even;
    }
    else{
        goto odd;
    }
    even:
        cout<<"Number is even";
        return 0;
    odd:
        cout<<"Number is odd";
        return 0;
}