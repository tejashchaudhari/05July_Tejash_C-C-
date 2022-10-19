#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string str;
	ofstream of;
	of.open("C:/c++/hellotejash.txt");
	of<<"**HelloTej'sh**";
	of.close();
	ifstream in;
	in.open("C:/c++/hellotejash.txt");
	in>>str;
	cout<<str;
	in.close();
	return 0;
}
