#include<iostream>
using namespace std;
class batsman
{
public:
	char bname[100];
	int totruns;
	int avgruns;
	int bestper;
	int innings;
	int playedmatch;
};
class crickete:public batsman
{
public:
	void displaydata()
	{
		cout<<"\nEnter the betsman Name: ";
		cin>>bname;
		cout<<"\nEnter the Total Runs: ";
		cin>>totruns;
		cout<<"\nEnter the Best performance: ";
		cin>>bestper;
		cout<<"\nEnter the Innings: ";
		cin>>innings;
		cout<<"\nEnter the played matchs: ";
		cin>>playedmatch;
		avgruns=totruns/(innings-playedmatch);
		cout<<"\nAverage Runs is: "<<avgruns;
	}
};
int main()
{
	crickete c1;
	c1.displaydata();
	return 0;
}
