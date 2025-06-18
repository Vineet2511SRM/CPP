#include<iostream>
using namespace std;

int main(){
    cout<<"Enter any character...."<<endl;

    char c;
    cin>>c;

    if (c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U'){
        cout<<"Vowel"<<endl;
    }
    else {
        cout<<"consonants"<<endl;
    }
}
        