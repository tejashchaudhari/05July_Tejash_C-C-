#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		sum+=n%10;
		n=n/10;
	}
	printf("sum of number=%d",sum);
	return 0;
}
