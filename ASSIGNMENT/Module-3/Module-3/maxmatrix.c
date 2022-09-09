#include<stdio.h>
int main()
{
	int i,j,a[3][3],max;
	printf("enter the number\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++);
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the first matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	max=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
	}
	printf("max matrix is %d\n",max);
	return 0;
}
