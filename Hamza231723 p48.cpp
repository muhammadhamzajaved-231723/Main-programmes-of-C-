#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cout<<"Enter first number :";
	cin>>a;
	cout<<"Enter second number :";
	cin>>b;
	cout<<"Enter third number :";
	cin>>c;
	max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	cout<<"The maximum number is "<<max;
	return 0;
}
