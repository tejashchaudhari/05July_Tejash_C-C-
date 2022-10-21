#include<iostream>
using namespace std;
class constructore 
{
public:
	float p;
	float r;
	float t;
	float si;
	float amount;
	
	int getdata()
	{
		cout<<"enter principale amount:";
		cin>>p;
		cout<<"enter the rate of intreast:";
		cin>>r;
		cout<<"enter number of year:";
		cin>>t;
		si=(p*r*t)/100;
		amount=si+p;
	}
	int showdata()
	{
		cout<<"\nprincipale amount is:"<<p;
		cout<<"\nrate of intreast is:"<<r;
		cout<<"\nnumber of years is:"<<t;
		cout<<"\nintreast is:"<<si;
		cout<<"\ntotal amount is:"<<amount;
	}	
};
int main()
{
	constructore c1;
	c1.getdata();
	c1.showdata();
	return 0;
}
