#include<iostream>
using namespace std;

int main(){
    cout<<"Enter number...:"<<endl;
    int num;
    cin>>num;

    if (num%3==0 || num%5==0){
        cout<<num<<endl;
    }
    return 0;

}