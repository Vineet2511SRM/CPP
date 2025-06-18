//printing factorials of first n numbers.....
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number upto which you have to print the factorial.....: ";
    cin>>n;

    int fact = 1;//factorial

    for(int i = 1; i<=n; i++){
        fact = fact*i;
        cout<<fact<<endl;
    }
    return 0;

}