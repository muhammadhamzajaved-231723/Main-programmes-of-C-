#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three digits :";
	cin>>a>>b>>c;
	if((a!=b)&&(b!=c)&&(c!=a))
	{
		cout<<a<<b<<c<<"\t";
		cout<<a<<c<<b<<"\t";
		cout<<b<<a<<c<<"\t";
		cout<<c<<a<<b<<"\t";
		cout<<c<<b<<a;
	}
	else
	{
		if((a==b)&&(a==c))
		cout<<a<<b<<c;
		else
		{
			if(a==b)
			{
				cout<<a<<b<<c<<"\t";
				cout<<a<<c<<b<<"\t";
				cout<<c<<b<<a;
			}
			else
			{
				if(a==c)
				{
					cout<<a<<c<<b<<"\t";
					cout<<a<<b<<c<<"\t";
					cout<<b<<a<<c;
				}
				else
				{
					cout<<b<<c<<a<<"\t";
					cout<<b<<a<<c<<"\t";
					cout<<a<<b<<c;
				}
			}
		}
	}
	return 0;
}
