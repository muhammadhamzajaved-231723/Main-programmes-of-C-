#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float area, radius, circumference;
	int choice;
	cout<<"Enter radius :";
	cin>>radius;
	cout<<"Enter 1 for area and 2 for circumference :";
	cin>>choice;
	if(choice==1)
	{area=radius*radius*3.141;
	cout<<"Area :"<<setprecision(4)<<area;
	}
	else if(choice==2)
	{circumference=2.0*3.141*radius;
	cout<<"Circumference :"<<circumference;
	}
	else 
	cout<<"Invalid choice.";
	return 0;
}
	
