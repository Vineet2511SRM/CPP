#include<iostream>
using namespace std;
int main(){

    int ch;
    cout<<"Enter number of characters you want to print.....: ";
    cin>>ch;
    //loop below help us to print no of characters in one line
    for(int i = 0;i<=ch;i++){
        cout<<char('A'+i);
    }
    return 0;
}