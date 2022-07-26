#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i, c=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d", &n);
	if(n ==0 || n==1)
	c=1;
	for(i=2; i<=n/2; i++)
	{
		if(n%i ==0)
		{
			c =0;
			break;
		}

	}
	if(c==0)
	{
		printf("%d is prime number.", n);
	}
	else
	{
		printf("%d is not prime number.", n);
	}
	getch();

}