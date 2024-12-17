#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the first number :";
	cin>>a;
	cout<<"Enter the second number :";
	cin>>b;
	cout<<"You input the numbers as "<<a<<"and"<<b<<endl;
	temp = a;
	a=b;
	b=temp;
	cout<<"The values after swapping are"<<a<<"and"<<b<<endl;
	return 0;
}
