#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"Enter your test score :";
	cin>>score;
	if(score>=90)
	cout<<"Your grade is A.";
	else if(score>=80)
	cout<<"Your grade is B.";
	else if(score>=70)
	cout<<"Your grade is C.";
	else if(score>=60)
	cout<<"Your grade is D.";
	else
	cout<<"Your grade is F.";
	return 0;
}
