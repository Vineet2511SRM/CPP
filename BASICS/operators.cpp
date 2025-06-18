#include<iostream>

using namespace std;

int main(){
    //Arithmetic operators
    int num1 = 6;
    int num2 = 3;
    
    cout<<num1+num2<<endl;//addition
    cout<<num1-num2<<endl;//subtraction
    cout<<num1*num2<<endl;//multiplication
    cout<<num1/num2<<endl;//division
    cout<<num1%num2<<endl;//modulus(Remainder)
    
    //Relational operators
    cout<<(num1==num2)<<endl;//false
    cout<<(num1!=num2)<<endl;//true
    cout<<(num1>num2)<<endl;//true
    cout<<(num1<num2)<<endl;//false
    
    bool exp1 = true;
    bool exp2 = false;

    cout<<(exp1&&exp2)<<endl;
    cout<<(exp1||exp2)<<endl;
    cout<<!exp1<<endl;

    num1+=3;
    cout<<num1<<endl;

    num2-=2;
    cout<<num2<<endl;

    num1/=3;
    cout<<num1<<endl;
    num2%=2;
    cout<<num2<<endl;

    int a = 5;//0101
    cout<<(a<<1)<<endl;

    cout<<(a>>1)<<endl;

    int b = 8;//1000
    cout<<(a&b)<<endl;//0
    cout<<(a|b)<<endl;//1101 = 13





    return 0;
     
    

}