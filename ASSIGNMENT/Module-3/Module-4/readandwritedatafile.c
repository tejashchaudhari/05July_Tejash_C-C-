#include<stdio.h>
int main()
{
	FILE *fptr;
	char str[100];
	fptr=fopen("C:/c++/tej.txt.txt","w");
	fprintf(fptr,"Hello Tej'sh chaudhari");
	fclose(fptr);
	fptr=fopen("C:/c++/tej.txt.txt","r");
	fscanf(fptr,"%s",&str);
	printf(str);
}
