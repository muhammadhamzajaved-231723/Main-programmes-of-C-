#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,n,x;
	float sum=0,den;
	cout<<"\nEnter the value of x :";
	cin>>x;
	cout<<"\nEnter the range :";
	cin>>n;
	for(i=0;i<n;i++)
	{
		den=pow(x,i);
		sum=sum+(1/den);
	}
	cout<<"Sum of series :"<<sum;
	return 0;
}
