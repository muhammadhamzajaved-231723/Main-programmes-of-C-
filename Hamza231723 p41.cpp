#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float e1,e2,g1,g2,p1,p2;
	cout<<"Enter current electricity rate :";
	cin>>e1;
	cout<<"Enter current petrol rate :";
	cin>>p1;
	cout<<"Enter current gas rate :";
	cin>>g1;
	e2=e1*1.1;
	p2=p1*1.1;
	g2=g1*1.1;
	cout<<"New electricity rate :"<<setprecision(4)<<e2<<endl;
	cout<<"New petrol rate :"<<setprecision(4)<<p2<<endl;
	cout<<"New gas rate :"<<setprecision(4)<<g2<<endl;
	return 0;
}
