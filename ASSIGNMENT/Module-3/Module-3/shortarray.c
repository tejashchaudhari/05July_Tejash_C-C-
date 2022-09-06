#include<stdio.h>
int main()
{
	int arr[5],i,j,t;
	printf("\nenter the array numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	printf("array short number is:");
	for(i=0;i<5;i++)
	{
		printf("%d:",arr[i]);
	}
	return 0;
}
