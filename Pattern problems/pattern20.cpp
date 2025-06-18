#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){//this loop is for printing spaces
            cout<<" ";
        }
        for(int j=1;j<=i;j++){//this loop is for printing numbers
                cout<<j<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}