#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="hello";
	char str2[]="world";
	strcpy(str1,str2);
	puts(str2);
	return 0;
}
