#include<stdio.h>
struct employeedata
{
	int no;
	char name[20];
	char address[20];
	int age;
}emp;
int main()
{
	printf("enter your employee number:");
	scanf("%d",&emp.no);
	printf("enter your emloyee name:");
	scanf("%s",&emp.name);
	printf("enter your address:");
	scanf("%s",&emp.address);
	printf("enter your age:");
	scanf("%d",&emp.age);
	printf("\nyour employee number is: %d",emp.no);
	printf("\nyour employee name is: %s",emp.name);
	printf("\nyour employee address is: %s",emp.address);
	printf("\nyour employee age is: %d",emp.age);
	return 0;
}
