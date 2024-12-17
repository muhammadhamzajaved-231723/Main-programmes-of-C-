#include<iostream>
using namespace std;
int main()
{
	int hrs,w,d;
	cout<<"Enter number of hours :";
	cin>>hrs;
	w=hrs/168;
	hrs=hrs%168;
	d=hrs/24;
	hrs =hrs%24;
	cout<<"Weeks :"<<w<<endl;
	cout<<"Days :"<<d<<endl;
	cout<<"Hours :"<<hrs;
	return 0;
}
