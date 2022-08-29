#include<stdio.h>
int main()
{
	int first,second,*p,*q,sum;
	printf(" \nenter two numbers:");
	scanf("%d%d",&first,&second);
	p=&first;
	q=&second;
	sum=*p+*q;
	printf("\nsum of two numbers: %d",sum);
	return 0;
}
