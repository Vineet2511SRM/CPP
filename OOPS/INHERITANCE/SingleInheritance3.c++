#include<iostream>
using namespace std;

class A {
    private:
        int a=4;
        int b = 10;
    public:
        int mul(){
            int c = a*b;
            return c;
        }
};

class B : private A { // Private inheritance
    public:
        void display(){
            int result = mul();
            cout<<"Multiplication of a and b is: "<<result<<endl;
        }
    };

int main(){
    B obj;
    obj.display();
    // obj.mul(); // Error: 'mul' is a private member of 'A'
    return 0;
}
