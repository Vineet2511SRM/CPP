//series = 1-2+3-4......n
#include<iostream>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter number:";
    cin>>num;

    int result = 0;
    for(int i = 1;i<=num;i++){
        if(i%2==0){
            result-=i;
        }
        else{
            result+=i;
        }
    }
    cout<<"Result is : "<<result;
    
    return 0;
}