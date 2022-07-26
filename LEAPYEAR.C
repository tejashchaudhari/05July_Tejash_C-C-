#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("Enter year:");
	scanf("%d", &year);
	if(year %400==0)
	{
		printf("%d is leap year.", year);
	}
	else if(year %100==0)
	{
		printf("%d is not leap year.", year);
	}
	else if(year %4==0)
	{
		printf("%d is leap year.", year);
	}
	else
	{
		printf("%d is not leap year.", year);
	}
	getch();

}