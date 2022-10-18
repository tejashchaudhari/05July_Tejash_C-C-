#include<iostream>
using namespace std;
class lecturer
{
public:
	char lecname[100];
	char sub[100];
	char cours[100];
	int numlec;
	
	void getdata();
	void displaydata();
}lec[100];
void lecturer::getdata()
{
	int i;
	for(i=0;i<=5;i++)
	{
		cout<<"Enter the lecturer info:\n"<<i+1;
		
		cout<<"Enter the Lecturere name:";
		cin>>lec[i].lecname;
		cout<<"Enter the subject name:";
		cin>>lec[i].sub;
		cout<<"Enter the cours name:";
		cin>>lec[i].cours;
		cout<<"Enter the number of lectur:";
		cin>>lec[i].numlec;
	}
}
void lecturer::displaydata()
{
	int i;
	for(i=0;i<=5;i++)
	{
		cout<<"\nEnter the lecturer info:\n"<<i+1;
		
		cout<<"\n\nName of lecturere:"<<lec[i].lecname;
		
		cout<<"\n\nsubject name is:"<<lec[i].sub;
		
		cout<<"\n\ncours name is:"<<lec[i].cours;
		
		cout<<"\n\nnumber of lectur is:"<<lec[i].numlec;
	}
}
int main()
{
	char lecname[100];
	char sub[100];
	char cours[100];
	int numlec;
	void showdata();
	int i;
	lecturer l1;
	
	cout<<"\nEnter the details";
	
	cout<<"\nEnter the name of lecture:";
	cin>>lec[i].lecname;
	cout<<"\nEnter the subject name:";
	cin>>lec[i].sub;
	cout<<"\nEnter the name of cours:";
	cin>>lec[i].cours;
	cout<<"\nEnter the number of lecture";
	cin>>lec[i].numlec;

	l1.getdata();
	l1.displaydata();
	return 0;
}
