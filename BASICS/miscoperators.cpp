#include<iostream>
using namespace std;

int main(){

    int a = 4;
    cout<<sizeof(a)<<endl; //4
    char name = 'a';
    cout<<sizeof(name)<<endl; //1

    bool flag;
    a==name? flag = true:flag = false;
    cout<<flag<<endl; //false(0)

    cout<<(&a)<<endl;

    int c = 10;
    int z = 20;

    cout<<(c++)<<endl; //10
    cout<<c<<endl; //11

    cout<<(++z)<<endl; //21

    return 0;
}