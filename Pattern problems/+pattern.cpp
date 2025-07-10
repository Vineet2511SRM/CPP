//program for printing a '+' pattern
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter no of rows: ";
    cin>>num;
    for(int line = 1;line<=num;line++){
        //printing spaces for current line
        for(int i = 1;i<=num;i++){
            if(i==(num/2+1)){
                cout<<"+";
            }
            else if(line == (num/2+1)){
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