#include<stdio.h>
struct studentdata
{
	int id;
	char nm[20];
}st;
int main()
{
//	st.id;
//	st.nm;
	printf("enter your student id:");
	scanf("%d",&st.id);
	printf("enter your name:");
	scanf("%s", &st.nm);
	printf("\nstudent id is %d",st.id);
	printf("\nstudent name is %s",st.nm);
	
}

