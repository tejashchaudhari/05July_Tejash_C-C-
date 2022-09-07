#include<stdio.h>
int main()
{
	int a[5],i,key,num=0;
	printf("enter the number");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to be shrch");
	scanf("%d",&key);
	printf("\n");
	for(i=0;i<5;i++)
	{
		if(a[i]==key)
		{
			printf("%dposition is %d\n",key,i+1);
			num++;
		}
	}
	printf("\n");
}
