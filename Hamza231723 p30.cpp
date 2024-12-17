#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float base,height;
	double area;
	cout<<"Enter base :";
	cin>>base;
	cout<<"Enter height :";
	cin>>height;
	area = 0.5*base*height;
	cout<<"Area ="<<setprecision(2)<<area;
	return 0;
}
