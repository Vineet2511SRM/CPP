#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number:";
    cin>>n;
    int reverse_num = 0;
    while(n>0){
        int digit = n%10; //last digit
        reverse_num = (reverse_num*10+digit);
        n = n/10;
    }
    cout<<"Reverse of number = "<<reverse_num<<endl;

    return 0;

}