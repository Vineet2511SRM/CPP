#include<iostream>
using namespace std;

int main(){
    int temperature;
    cout<<"Enter temperature in celsius : ";
    cin>>temperature;
    
    if (temperature >= 80) {
        cout << "Suggested Activity at Resort: Swimming" << endl;
    } 
    else if (temperature >= 60) { // 60 <= temp < 80
        cout << "Suggested Activity at Resort: Tennis" << endl;
    } 
    else if (temperature >= 40) { // 40 <= temp < 60
        cout << "Suggested Activity at Resort: Golf" << endl;
    } 
    else { // temp < 40
        cout << "Suggested Activity at Resort: Skiing" << endl;
    }

    return 0;
}

