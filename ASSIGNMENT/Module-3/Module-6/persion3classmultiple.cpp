#include<iostream>
using namespace std;
class person
{
public:
	char mname[100];
	char mage[100];
	void persondata()
	{
		cout<<"\nEnter Member Name: ";
		cin>>mname;
		cout<<"\nEnter Member Age: ";
		cin>>mage;
	}
};
class student
{
public:
	char spercentage[100];
	void studentdata()
	{
		cout<<"\nEnter the Student percentage: ";
		cin>>spercentage;
	}
};
class teacher
{
public:
	char tsalary[100];
	void teacherdata()
	{
		cout<<"\nEnter the teacher salary: ";
		cin>>tsalary;
	}
};
class school: public person,public student,public teacher
{
public:
	void displaydata()
	{
		cout<<"************************************";
		
		cout<<"\nThe member Name is: "<<mname;
		
		cout<<"\nThe member Age is: "<<mage;
		
		cout<<"\n___________________________________";
		
		cout<<"\nThe student perchentage is: "<<spercentage;
		
		cout<<"\n____________________________________";
		
		cout<<"\nThe Teacher salary is: "<<tsalary;
		
		cout<<"\n************************************";
	}
};
int main()
{
	school s;
	s.persondata();
	s.studentdata();
	s.teacherdata();
	s.displaydata();
	return 0;
}
