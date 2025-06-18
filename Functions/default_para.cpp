#include<iostream>
using namespace std;

int add(int a,int b,int c = 0){
   int z = (a+b+c);
   return z;
}

int main(){
    int x = 5,y = 10;
    int v = add(x,y);
    cout<<v;
    
    return 0;
}