#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char name[25],city[30];
	int age;
	cout<<"Enter your age:";
	cin>>age;
	cout<<"Enter your first name:";
	cin>>name;
	cout<<"Enter your city:";
	cin>>city;
	cout<<"\n Your first name is "<<name<<endl;
	cout<<"Your city is "<<city<<endl;
	cout<<"Your age is "<<age<<endl;
	return 0;
}
