#include<iostream>
using namespace std;
template<class T>
int swapvalue(T a,T b)
{
	T t;
	t=a;
	a=b;
	b=t;
	return 0;
}
int main()
{
	int c,d;
	c=10,d=20;
	swapvalue(c,d);
	cout<<d<<" "<<c<<endl;
	return 0;
}
