#include<iostream>
using namespace std;

int main(){
    //this program is used to convert decimal into binary form
    int num;
    cout<<"Enter the number in decimal form: ";
    cin>>num;

    int ans = 0;
    int power = 1;

    while(num>0){
        int parity_digit = num%2;
        ans+= (parity_digit*power);
        power*=10;
        num/=2;
    }
    cout<<"Number in binary form = "<<ans<<endl;
    return 0;
}