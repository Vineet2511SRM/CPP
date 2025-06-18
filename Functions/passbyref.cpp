#include<iostream>
using namespace std;

void change_Value(int &z, int &y){//allies name
    z =  100;
    y = 99;
}


int  main(){
    
    int a = 5;
    int b = 10;
    change_Value(a,b);
    cout<<a<<endl;
    cout<<b<<endl;


    return 0;
}