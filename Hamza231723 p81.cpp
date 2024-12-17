#include<iostream>
#include<iomanip>
using namespace std;
const double PI=3.141593;
int main()
{
	int degrees=0;
	double radians;
	cout.precision(6);
	cout<<"Degrees to Radian \n";
	while(degrees<=360)
	{
		radians=degrees*PI/180;
		cout<<setw(6)<<degrees<<setw(10)<<radians<<endl;
		degrees+=10;
	}
	return 0;
}
