#include<stdio.h>
#include<string.h>
int main()
{
	char str1[256],str2[256],*a,*b;
	printf("enter the first string: ");
	gets(str1);
	printf("enter the second string: ");
	gets(str2);
	a=str1;
	b=str2;
	strcat(str1,str2);
	puts(str1);
	return 0;
}
