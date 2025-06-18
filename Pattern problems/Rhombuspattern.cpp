#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i;j++)//for spaces
        {
            cout<<"  ";
        }
        for(int j=1;j<=num;j++){//this loop is for stars
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}