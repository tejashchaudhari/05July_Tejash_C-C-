#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file;
	file.open("C:/c++/hello.txt");
	{
		cout<<"hello tejash";
	}
	ofstream f("C:/c++/hello.txt");
	file.close();
	return 0;
}
