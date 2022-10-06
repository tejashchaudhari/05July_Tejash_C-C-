#include<iostream>
using namespace std;
class grand
{
public:
	int house;
	int gdata()
//	int house;
	{
//		int house;
		cout<<"enter number of house:";
		cin>>house;
		return 0;
	}
};
class perent:public grand
{
	public:
		int balance;
		int pdata()
		{
			cout<<"enter bank balance:";
			cin>>balance;
			return 0;
		}
};
class child:public perent
{
	public:
		int showdata()
		{
			cout<<"\nyour number of house:"<<house;
//			cin>>house;
			cout<<"\nyour total bank balance:"<<balance;
//			cin>>balance;
			return 0;	
		}	
};
int main()
{
	child c1;
	c1.gdata();
	c1.pdata();
	c1.showdata();
	return 0;
}
