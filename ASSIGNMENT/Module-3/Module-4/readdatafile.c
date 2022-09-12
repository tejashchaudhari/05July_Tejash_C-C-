#include<stdio.h>
int main()
{
	FILE *fptr;
	char str[100];
	fptr=fopen("C:/c++/tej.txt.txt","r");
	fscanf(fptr,"%s",&str);
	printf(str);
}
