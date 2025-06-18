#include<iostream>
using namespace std;

int main()
{
	int rows;

	cout<<"Enter Diamond Pattern of Alphabets Rows = ";
	cin>>rows;
		
	cout << "Printing Diamond Alphabets Pattern\n";
	//this loop is used for upper triangle
	for (int i = 1 ; i <=rows; i++ ) 
	{
		for (int j = 0; j <rows - i; j++ ) //this loop is used for printing spaces
		{
			cout<<" ";	
		}
		for (int k=0;k<2*i-1;k++) //this loop is used for printing characters
		{
			cout<<char('A' + k);
		}
		cout<<"\n";
	}
		//this loop is for lower triangle
	for (int i = rows - 1;i > 0; i--) 
	{
		for (int j = 1 ; j <= rows - i; j++ ) //this loop is for printing spaces
		{
			cout<<" ";
		}
		for (int k = 0;k<2*i-1; k++ ) //this loop is used for printing characters
		{
			cout<<char('A' + k);
		}
		cout<<"\n";
	}
	return 0;
}