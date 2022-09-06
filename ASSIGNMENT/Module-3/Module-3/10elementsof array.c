#include<stdio.h>
int main()
{
	int arr[10],i,max;
	printf("enter the 10 numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]>arr[0])
		{
			arr[0]=arr[i];
		}
		max=arr[0];
	}
	printf("maximum number is %d",arr[0]);
	return 0;
}
