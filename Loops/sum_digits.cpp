#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    int sum = 0;
    while(num>0){
        int lastdigit = num%10;
        sum+=lastdigit;
        num = num/10;
    }
    cout<<"Sum of digits of the number entered = "<<sum<<endl;
    return 0;

}