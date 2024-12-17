#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three numbers :";
	cin>>a>>b>>c;
	if(a>b&&a>c)
	cout<<"Maximum number is "<<a;
	else if(b>a&&b>c)
	cout<<"Maximum number is "<<b;
	else 
	cout<<"Maximum number is "<<c;
	return 0;
}
