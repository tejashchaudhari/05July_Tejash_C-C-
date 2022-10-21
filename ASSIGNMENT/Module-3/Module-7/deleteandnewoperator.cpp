#include<iostream>
using namespace std;
int main()
{
	int *a,*b,c;
	a=new int;
	b=new int;
	cout<<"enter the first num:";
	cin>>*a;
	cout<<"enter the second num:";
	cin>>*b;
	c=*a+*b;
	cout<<"adition is:"<<c;
	delete a;
	delete b;
}
