//program for printing a '+' pattern
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;
    for(int line = 1;line<=n;line++){
        //printing spaces for current line
        for(int i = 1;i<=n;i++){
            if(i==(n/2+1)){
                cout<<"+";
            }
            else if(line == (n/2+1)){
                cout<<"+";
            }
            else{
                cout<<" ";
            }     

    }
    cout<<"\n";
    }
    return 0;
}