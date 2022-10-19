#include<iostream>
using namespace std;
class Account
{
public:
	char cust_name[100];
	char acc_type[100];
	int acc_num;
	int balance;
	void getdata()
	{
		cout<<"\nEnter the customer Name:";
		cin>>cust_name;
		cout<<"\nEnter the Account number:";
		cin>>acc_num;
		cout<<"\nEnter the Account tyepe \n1.saving\n2.current";
		cin>>acc_type;
		cout<<"\nEnter the Account Balance:";
		cin>>balance;
	}
	void display()
	{
		cout<<"\nCustomer Name:"<<cust_name;
		cout<<"\nAccount Number:"<<acc_num;
		cout<<"\nAccount type:"<<acc_type;
		cout<<"\nAccount Balance:"<<balance;
	}
	void deposit()
	{
		int a;
		cout<<"\nEnter the deposit Amount:";
		cin>>a;
		balance+=a;
	}
};
class save_acc:public Account
{
public:
	int b;
	void comp_intrest()
	{
		int t1,r1=10;
		b=balance*(1+r1/12,t1);
		cout<<b;
		balance+=b;
	}
	void withdraw()
	{
		int w;
		cout<<"\nEnter the withdraw Amount:";
		cin>>w;
		if(balance>w)
		balance-=w;
		else
		cout<<"\ninsufficient balance";
	}
};
class curr_acc:public Account
{
public:
	void min_balance()
	{
		if(balance<500)
		{
			cout<<"\nPenalty imposed: \nnew balance is:"<<balance-50;
		}
		else
		{
			cout<<"\nNo penalty imposed.";
		}
	}
	void withdraw()
	{
		int w;
		cout<<"\nEnter withdraw Amount:";
		cin>>w;
		if(w>balance)
		{
			cout<<"insufficient balance.";
		}
		else
		{
			balance-=w;
		}
	}
};
int main()
{
	save_acc s1;
	curr_acc c1;
	
	c1.getdata();
	c1.display();
	c1.deposit();
	c1.display();
	c1.withdraw();
	c1.display();
	c1.min_balance();
	s1.getdata();
	s1.display();
	s1.deposit();
	s1.comp_intrest();
	s1.display();
	
	s1.withdraw();
	s1.display();
}
