#include<iostream>
using namespace std;
class Friend
{
	int a,b;
public:
	int input()
	{
		cout<<"enter the two numbers:";
		cin>>a>>b;
	}
	friend int swap(Friend fd);
int display()
	{
		cout<<"\nafter swap a is:"<<b;
		cout<<"\nafter swap b is:"<<a;
	}
};
int swap(Friend fd)
{
	fd.b=fd.a;
	fd.a=fd.b;
}
int main()
{
	Friend f1;
	f1.input();
	swap(f1);
	f1.display();
}
