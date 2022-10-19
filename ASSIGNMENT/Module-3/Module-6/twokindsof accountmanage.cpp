#include<iostream>
#include<string.h>
using namespace std;
class Account
{
public:
	char name[100];
	int acc_num;
	int acc_type;
	int balance;
	int Amount;
	
	void getdata()
	{
		cout<<"\nEnter the customer name:";
		cin>>name;
		cout<<"\nEnter the Account number:";
		cin>>acc_num;
		cout<<"\nEnter the Account type\n1. Saving Account.\n2.Current Account.";
		cin>>acc_type;
		cout<<"\nEnter the Account balance:";
		cin>>balance;
	}
	void display()
	{
		cout<<"\nYour Account Balance is:"<<balance;
	}
	void whithdraw()
	{
		cout<<"\nEnter the whithdraw Amount:";
		cin>>Amount;
		if(Amount>balance)
		{
			cout<<"\nInsuficient balance.";
		}
		else
		balance=balance-Amount;
		display();
	}
	
};
class cur_acc:public Account
{
public:
	void panelty()
	{
		if(balance<200 && acc_type==2)
		{
			balance=balance-20;
			display();
		}
	}
};
class save_acc:public Account
{
public:
	void interest()
	{
		int i;
		cout<<"\nEnter time interest in year:";
		cin>>i;
		balance=balance*(1+2*i);
		display();
	}
};
int main()
{
	Account a1;
	a1.getdata();
	a1.display();
	a1.whithdraw();
	return 0;
}
