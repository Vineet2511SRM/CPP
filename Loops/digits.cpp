#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number:";
    cin>>num;//12465

    int digits = 0;
    while(num>0){
        digits++;//5
        num = num/10;//0
    }
    cout<<"No of digits are:";
    cout<<digits<<endl;

    return 0;

}