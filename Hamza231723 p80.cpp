#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	long int n,c,f;
	c=1;
	f=1;
	cout<<"Enter a number :";
	cin>>n;
	while(c<=n)
	{
		f=f*c;
		c=c+1;
	}
	cout<<"Factorial of "<<n<<"is"<< f;
	return 0;
}
