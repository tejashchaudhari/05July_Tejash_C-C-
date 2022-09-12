#include<stdio.h>
int fib(int r);
int main()
{
	int r;
	printf("enter the range:");
	scanf("%d",&r);
	printf("fibonacci serise is:\n");
	fib(r);
	return 0;
}
int fib(int r)
{
	int a=0,b=1,c;
	while(a<=r)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
}
