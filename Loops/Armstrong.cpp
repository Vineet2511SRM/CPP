#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    int original_n = n;
    while(n > 0){
        int last_digit = n % 10;
        sum += round(pow(last_digit, 3));  // Removed the round() function
        n = n / 10;
    }
    
    if(sum == original_n){
        cout << original_n << " is an Armstrong number" << endl;
    }
    else{
        cout << original_n << " is not an Armstrong number" << endl;
    }

    return 0;
}
