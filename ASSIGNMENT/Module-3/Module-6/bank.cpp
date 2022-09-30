#include<iostream>
using namespace std;
class bank
{
	
	
public:
	char name[50];
	int accno;
	char acctype[50];
	float accbalance;
//	void getvalue()
	
	
	void deposit();
	void withdraw();
	void display();
//	{
//		cout<<"Enter the name of depositor:";
//		cin>>name;
//		cout<<"Enter the Account Number:";
//		cin>>accno;
//		cout<<"Enter the Account Type of Account:";
//		cin>>acctype;
//		cout<<"Balance Amount in the account:";
//		cin>>accbalance;
//	}
//	void displayvalue()
//	{
//		cout<<"Name of depositor:"<<name<<endl;
//		cout<<"Account Number:"<<accno<<endl;
//		cout<<"Type of Account:"<<acctype<<endl;
//		cout<<"Balance Amount In the account:"<<accbalance<<endl;
//	}
};
void bank::deposit()
{
//	balance=0;
	int demat;
	cout<<"\nEnter the deposit amount:";
	cin>>demat;
	accbalance+=demat;
}
void bank::withdraw()
{
	int wamt1;
	cout<<"\nenter the withdrawnamount:";
	cin>>wamt1;
	if(wamt1>accbalance)
		cout<<"\ncannot withdraw amount";
	accbalance-=wamt1;
}
void bank::display()
{
	cout<<"\n____________";
	cout<<"\nAccount No:->"<<accno;
	cout<<"\nName:->"<<name;
	cout<<"\nAccount Type:->"<<acctype;
	cout<<"\nbalance:->"<<accbalance;
}
int main()
{
	char name[50];
	int accno;
	char acctype[50];
	float accbalance;
	void getvalue();
	bank b1;
	
	cout<<"**ENTER THE DETAILS**\t";
	
	
	cout<<"\nEnter the name of depositor:";
	cin>>b1.name;
	cout<<"\nEnter the Account Number:\t";
	cin>>b1.accno;
	cout<<"\nEnter the Account Type of Account:\t";
	cin>>b1.acctype;
	cout<<"\nBalance Amount in the account:\t";
	cin>>b1.accbalance;
	
	
	b1.deposit();
	b1.withdraw();
	b1.display();
	return 0;
//	b1.getvalue();
//	b1.displayvalue();
}
