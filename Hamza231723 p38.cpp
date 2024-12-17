#include<iostream>
using namespace std;
int main()
{
	int ev,od,r;
	cout<<"Enter an even number :";
	cin>>ev;
	cout<<"Enter an odd number :";
	cin>>od;
	r =1000-((ev*5)+(od*3));
	cout<<"Difference ="<<r;
	return 0;
}
