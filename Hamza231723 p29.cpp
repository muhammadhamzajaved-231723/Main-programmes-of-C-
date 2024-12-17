#include<iostream>
using namespace std;
int main()
{
	double distance,time,speed;
	cout<<"Enter the distance traveled in miles :";
	cin>>distance;
	cout<<"Enter the speed of vehicle (mph) :";
	cin>>speed;
	time =distance/speed;
	cout<<"Time required to reach destination :"<<time<<"hours."<<endl;
	return 0;
}
