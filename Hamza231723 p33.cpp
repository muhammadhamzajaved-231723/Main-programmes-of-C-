#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int height;
	float height_in_cent;
	cout<<"Enter height in inches :";
	cin>>height;
	height_in_cent = height*2.54;
	cout<<"Your height in centimeters is :";
	cout<<setprecision(2)<<height_in_cent;
	return 0;
}
