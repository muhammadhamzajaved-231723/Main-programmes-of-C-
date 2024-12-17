#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter first integer :";
	cin>>a;
	cout<<"Enter second integer :";
	cin>>b;
	if(a%b==0)
	cout<<"The first number is a multiple of second .";
	else 
	cout<<"The first number is not a multiple of second.";
	return 0;
}
