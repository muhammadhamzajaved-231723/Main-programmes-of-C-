#include<iostream>
using namespace std;
int main()
{
	int choice,months;
	double charges;
	cout<<"Health Club Membership Menu\n\n";
	cout<<"1. Standard Adult Membership\n";
	cout<<"2. Child Membership\n";
	cout<<"3. Senior Citizen Membership\n";
	cout<<"4. Quit the Program\n\n";
	cout<<"Enter your choice :";
	cin>>choice;
	if(choice>=1&&choice<=3)
	{
		cout<<"For how many months ?";
		cin>>months;
		switch(choice)
		{
			case 1:  charges=months*50.0;
			break;
			case 2:  charges=months*20.0;
			break;
			case 3:  charges=months*30.0;
		}
		cout<<"The total charges are Rs. "<<charges<<endl;
	}
	else if(choice !=4)
	{
		cout<<"The valid choices are 1 to 4.\n";
		cout<<"Run the program again and select one of these.\n";
	}
	return 0;
}
