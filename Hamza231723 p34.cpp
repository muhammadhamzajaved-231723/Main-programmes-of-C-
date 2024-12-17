#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float area,radius,cir;
	cout<<"Enter radius :";
	cin>>radius;
	area =radius*radius*3.141;
	cir =2.0*3.141*radius;
	cout<<"Area :"<<setprecision(2)<<area<<endl;
	cout<<"Circumference :"<<setprecision(2)<<cir;
	return 0;
}
