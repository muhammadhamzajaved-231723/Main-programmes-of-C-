#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"\n Enter 2 integers respectively :";
	cin>>x>>y;
	cout<<"\n The original value in x ="<<x<<"and y ="<<y;
	x =x+y;
	y =x-y;
	x =x-y;
	cout<<"\n The swapped value in x="<<x<<"and y ="<<y;
	return 0;
}
