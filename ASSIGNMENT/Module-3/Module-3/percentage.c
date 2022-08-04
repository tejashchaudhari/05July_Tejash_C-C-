#include<stdio.h>
int main()
{
		int phy, bio, chem, math, comp, marks;
		float per;
		
		printf("enter the five subject marks: ");
		scanf("%d%d%d%d%d", &phy, &bio, &chem, &math, &comp);
		scanf("%d", &marks);
		
		per=(phy+bio+chem+math+comp)/5;
		printf("percentage =%f\n", per);
		
		if(marks<=35)
		{
			printf("fail");
		}
		
		else if(per >=75)
		{
			printf("first class");
		}
		else if(per >=60)
		{
			printf("second class");
		}
		else if(per >=50)
		{
			printf("pass class");
		}
		else 
		{
			printf("fail");
		}
		return 0;
		
}