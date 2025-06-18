#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){//for printing spaces
            cout<<"  ";
        }
        int k=i;
        for(;j<=n;j++){//for printing numbers in descending order
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++){//for printing numbers in ascending order
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}