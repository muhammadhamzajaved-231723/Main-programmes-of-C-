#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double p,r,t,i;
	cout<<"Enter principal amount, rate, time:";
	cin>>p>>r>>t;
	i =(p*r*t)/100;
	cout<<"\n Principal Amt = Rs."<<p;
	cout<<"\n Rate ="<<r<<"%";
	cout<<"\n Time ="<<t<<"yrs.";
	cout<<"\n Simple Interest Amt = Rs."<<i;
	return 0;
}
