#include<stdio.h>
int main()
{
		int phy, bio, chem, math, comp, mark;
		float per;
		
		printf("enter the five subject marks: ");
		scanf("%d%d%d%d%d", &phy, &bio, &chem, &math, &comp);
		
		per=(phy+bio+chem+math+comp)/5;
		printf("percentage =%f\n", per);
		
		if(per >=75)
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