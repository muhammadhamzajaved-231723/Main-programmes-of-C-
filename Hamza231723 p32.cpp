#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float cel,faren;
	cout<<"Enter temperature in Celcius :";
	cin>>cel;
	faren =9.0/5.0*cel+32;
	cout<<"Temperature in Fahrenheit is ";
	cout<<setprecision(2)<<faren;
	return 0;
}
