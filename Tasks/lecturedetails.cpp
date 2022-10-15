#include<iostream>
using namespace std;
class ravi
{
public:
	char rname[100];
	char rsubject[100];
	char rcourse[100];
	int rnumlecture;
	int rdata()
	{
		cout<<"\nRavi sir:";
//		cin>>rname;
		cout<<"\nEnter sub name:";
		cin>>rsubject;
		cout<<"\nEnter course name:";
		cin>>rcourse;
		cout<<"\nEnter number of lectures:";
		cin>>rnumlecture;
	}
};
class kajal
{
public:
	char kname[100];
	char ksub[100];
	char kcourse[100];
	int knumlecture;
	int kdata()
	{
		cout<<"\nkajal meadam:";
//		cin>>name;
		cout<<"\nEnter sub name:";
		cin>>ksub;
		cout<<"\nenter course name:";
		cin>>kcourse;
		cout<<"\n eneter number of lecture:";
		cin>>knumlecture;
	}
};
class gohel
{
public:
	char gname[100];
	char gsub[100];
	char gcourse[100];
	int gnumlecture;
	int gdata()
	{
		cout<<"\ngohel sir:";
		cout<<"\nEnter sub name:";
		cin>>gsub;
		cout<<"\nEnter course name:";
		cin>>gcourse;
		cout<<"\nEnter number of lecture:";
		cin>>gnumlecture;
	}
};
class priyanka
{
public:
	char pname[100];
	char psub[100];
	char pcourse[100];
	int pnumlecture;
	int pdata()
	{
		cout<<"\npriyanka madam:";
		cout<<"\nEnter sub name:";
		cin>>psub;
		cout<<"\nEnter coures name:";
		cin>>pcourse;
		cout<<"\nEnter number of lecture:";
		cin>>pnumlecture;
	}
};
class trupti
{
public:
	char tname[50];
	char tsub[10];
	char tcourse[20];
	int tnumlecture;
	int tdata()
	{
		cout<<"\ntrupti meadam:";
		cout<<"\nEnter sub name:";
		cin>>tsub;
		cout<<"\nEnter course name:";
		cin>>tcourse;
		cout<<"\nEnter the number of lecture:";
		cin>>tnumlecture;
	}
};
class lecturerdata:public ravi,public kajal,public gohel,public priyanka,public trupti
{
public:
	int showdata()
	{
		cout<<"\n********* Ravi sir.********";
		cout<<"\n\tSubject is:"<<rsubject;
		cout<<"\n\tCourse name is:"<<rcourse;
		cout<<"\n\tNumber of lecture is:"<<rnumlecture;
		
		cout<<"\n________________________________";
		
		cout<<"\n********* Kajal Meadam ******";
		cout<<"\n\tSubject is:"<<ksub;
		cout<<"\n\tCourse Name is:"<<kcourse;
		cout<<"\n\tNumber of lecture is:"<<knumlecture;
		
		cout<<"\n________________________________";
		
		cout<<"\n********** Gohel sir. *******";
		cout<<"\n\tSubject is:"<<gsub;
		cout<<"\n\tCourse Name is:"<<gcourse;
		cout<<"\n\tNumber of lecture is:"<<gnumlecture;
		
		cout<<"\n_________________________________";
		
		cout<<"\n********** Priyanka Meadam ********";
		cout<<"\n\tSubject is:"<<psub;
		cout<<"\n\tCourse Name is:"<<pcourse;
		cout<<"\n\tNumber of lecture is:"<<pnumlecture;
		
		cout<<"\n_________________________________";
		
		cout<<"\n********** Trupti Meadam **********";
		cout<<"\n\tSubject is:"<<tsub;
		cout<<"\n\tCourse Name is:"<<tcourse;
		cout<<"\n\tNumber of lecture is:"<<tnumlecture;
		
		cout<<"\n________________________________________";
		cout<<"\n***************************************";
	}
};
int main()
{
	lecturerdata l;
	l.rdata();
	l.kdata();
	l.gdata();
	l.pdata();
	l.tdata();
	l.showdata();
	return 0;
}
