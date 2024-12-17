#include<iostream>
using namespace std;
int main()
{
	int c,sum;
	c=1;
	sum=0;
	while(c<=5)
	{
		cout<<c<<endl;
		sum=sum+c;
		c=c+1;
	}
	cout<<"Sum is "<<sum;
	return 0;
}
