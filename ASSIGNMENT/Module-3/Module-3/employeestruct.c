#include<stdio.h>
struct employeedata
{
	int number;
	char name[20];
	int age;
	char address[20];
}emp[20];
int main()
{
	int a;
	for(a=0;a<5;a++)
	{
		printf("enter employee info:%d\n",a+1);
		printf("enter employee age:");
		scanf("%d",&emp[a].age);
		printf("enter employee address:");
		scanf("%s",&emp[a].address);
		printf("enter employe number:");
		scanf("%d",&emp[a].number);
		printf("enter employee name:");
		scanf("%s",&emp[a].name);
	}
	for(a=0;a<5;a++)
	{
		printf("\nyour employee info is:%d",a+1);
		printf("\nyour employee age is:%d",emp[a].age);
		printf("\nyour employee address is:%s",emp[a].address);
		printf("\nyour employee number is:%d",emp[a].number);
		printf("\nyour employee name is:%s",emp[a].name);
	}
}
