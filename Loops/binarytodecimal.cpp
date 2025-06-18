#include<iostream>
using namespace std;

int main(){
    //this program is used to take a number from user which is in binary form and convert it into decimal form
    int num;
    cout<<"Enter number in binary form:";
    cin>>num;

    int ans = 0;
    int power = 1;

    while(num>0){
        int last_digit = num%10;
        ans+=last_digit*power;
        power*=2;
        num/=10;
    }
    cout<<"Number converted into decimal form and it is = "<<ans<<endl;
    return 0;
}