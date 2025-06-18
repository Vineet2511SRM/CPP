#include<iostream>
using namespace std;

int makeTwice(int p){//formal
    p *= 2;
    return p;
}

int main(){
    int a = 24;//actual
    int z = makeTwice(a);
    cout<<z;//---->24
}