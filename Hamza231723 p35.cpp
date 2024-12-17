#include<iostream>
using namespace std;
int main()
{
	int vi,vf,a,t;
	cout<<"Enter the initial velocity :";
	cin>>vi;
	cout<<"Enter the acceleration :";
	cin>>a;
	cout<<"Enter the time :";
	cin>>t;
	vf =vi+a*t;
	cout<<"The final velocity is"<<vf<<endl;
	return 0;
}
