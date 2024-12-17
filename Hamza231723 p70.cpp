#include<iostream>
using namespace std;
int main()
{
	int number,option;
	char letter;
	cout<<"1: Convert ASCII value to Character"<<endl;
	cout<<"2: Convert Character to ASCII value"<<endl;
	cout<<"Enter your choice :";
	cin>>option;
	switch(option)
	{
		case 1:
		cout<<"Enter a number :";
		cin>>number;
		cout<<"The corresponding character is :"<<char(number)<<endl;
		break;
		case 2:
		cout<<"Enter a letter :";
		cin>>letter;
		cout<<"ASCII value of the letter is :"<<int(letter)<<endl;
		break;
		default:
		cout<<"Invalid Option !";
		break;	
	}
	return 0;
}
