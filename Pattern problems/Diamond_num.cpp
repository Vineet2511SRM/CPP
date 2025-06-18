#include<iostream>
using namespace std;

int main()
{
	int rows;

	cout<<"Enter number of rows = ";
	cin>>rows;
		
	cout << "Printing Diamond Numbers Pattern\n";
	//this loop is used for upper triangle
	for (int i = 1 ; i <=rows; i++ ) 
	{
		for (int j = 0; j <rows - i; j++ ) //this loop is used for printing spaces
		{
			cout<<" ";	
		}
		for (int k=0;k<2*i-1;k++) 
		{
			cout<<"*";
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
		for (int k = 0;k<2*i-1; k++ ) 
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}