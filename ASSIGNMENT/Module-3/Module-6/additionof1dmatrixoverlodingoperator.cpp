#include<iostream>
using namespace std;
class matrix
{
	int a[3][3];
public:
	void accept();
	void display();
	void operator +(matrix x);
};
void matrix::accept()
{
	cout<<"\n enter matrix number(3*3):\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" ";
			cin>>a[i][j];
		}
	}
}
void matrix::display()
{
	cout<<" ";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void matrix::operator +(matrix x)
{
	int mat[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			mat[i][j]=a[i][j]+x.a[i][j];
		}
	}
	cout<<"\n addition of matrix:\n\n";
	for(int i=0;i<3;i++)
	{
		cout<<" ";
		for(int j=0;j<3;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
int main()
{
	matrix m,n;
	m.accept();
	n.accept();
	cout<<"\n first matrix:\n\n";
	m.display();
	cout<<"\n second matrix:\n\n";
	n.display();
	m+n;
	return 0;
}
