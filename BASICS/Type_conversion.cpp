#include<iostream>
using namespace std;

int main(){
    //explicit type conversion
    int x = 98;
    cout<<char(x)<<endl;

    //implicit type conversion
    cout<<char(x+1);
    
    return 0;
}