#include <iostream>
using namespace std;

int main(){
    cout<<"Enter number......:";
    int n;
    cin>>n;

    int sum = 0;
    int i = 1;
    do{
        sum+=i;
        i++;
    }while(i<=n);
    cout<<sum<<endl;
    return 0;
}