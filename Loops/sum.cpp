//sum of first n natural numbers
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value......";
    cin>>n;

    int sum = 0;
    cout<<"Natural numbers upto the " <<n<< " th term are: \n";

    int i = 1;//loop variable
    while(i<=n){//condition
        cout<<i<<" ";
        sum+=i;
        i++;//updating loop variable
    }
    cout<<"\nThe sum of the natural numbers is : "<<sum<<endl;
    return 0;

}