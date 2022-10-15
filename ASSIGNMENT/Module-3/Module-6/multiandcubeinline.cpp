#include<iostream>
using namespace std;
class Inline
{
public:
	inline int mul(int a,int b)
	{
		return(a*b);
	}
	inline int cube(int a)
	{
		return(a*a*a);
	}
};
int main()
{
	Inline in;
	int x,y;
	cout<<"\nEnter two numbers: ";
	cin>>x>>y;
	cout<<"\nThe multiplication value is: "<<in.mul(x,y);
	cout<<"\n\nThe cubic value is: "<<in.cube(x)<<"\t"<<in.cube(y);
	return 0;
}
