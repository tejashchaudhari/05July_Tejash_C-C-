#include<stdio.h>
int main()
{
	FILE* fptr;
	int i,n=2;
	char str[100];
	fptr=fopen("C:/TURBOC3/bin/hello.txt","w");
	for(i=1;i<=10;i++)
	{
		fprintf(fptr,"%d*%d=%d\n",n,i,n*i);
	}
	fclose(fptr);
	fptr=fopen("C:/TURBOC3/bin/hello.txt","r");
	fscanf(fptr,"%s",&str);
	printf(str);
	return 0;
}
