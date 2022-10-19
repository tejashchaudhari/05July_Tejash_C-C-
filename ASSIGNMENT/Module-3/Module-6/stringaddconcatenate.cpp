#include<iostream>
#include<string.h>
using namespace std;
class Adstring
{
public:
	char s1[10];
	char s2[10];
	Adstring(char str1[], char str2[])
	{
		strcpy(this->s1,str1);
		strcpy(this->s2,str2);
	}
	void operator+()
	{
		cout<<"\nconcatenation is: "<<strcat(s1,s2);
	}
};
int main()
{
	char str1[] ="Tejash";
	char str2[] ="Chaudahri";
	Adstring ad1(str1, str2);
	+ad1;
	return 0;
	
}
