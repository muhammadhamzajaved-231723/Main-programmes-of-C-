#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Enter an alphabet :";
	cin>>c;
	switch(c)
	{
		case'a':
		case'A':
		cout<<"You entered vowel.";
		break;
		case'e':
		case'E':
		cout<<"Youe entered vowel.";
		break;
		case'i':
		case'I':
		cout<<"You entered vowel.";
		break;
		case'o':
		case'O':
		cout<<"You entered vowel.";
		case'u':
		case'U':
		cout<<"You entered vowel.";
		break;
		default:
		cout<<"Not vowel";
	}
	return 0;
}
