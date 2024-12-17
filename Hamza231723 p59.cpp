#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three number :";
	cin>>a>>b>>c;
	if(a<b)
	if(a<c)
	cout<<a<<"is smallest number .";
	else
	cout<<c<<" is smallest number .";
	else
	if(b<c)
	cout<<b<<" is smallest number .";
	else
	cout<<c<<" is smallest number .";
	return 0;
}
