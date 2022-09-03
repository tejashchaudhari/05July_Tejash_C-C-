#include<stdio.h>
int main()
{
	int ch;
	printf("1.triangle\n2.rectangle\n3.circle\n");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			int a,b,c;
			float s,area;
			printf("enter sides of triangle\n");
			scanf("%d%d%d",&a,&b,&c);
			s=(float)(a+b+c)/2
			area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
			printf("\narea of triangle is %f",area);
			break;
		}
		case 2:
			float len,breadth,area;
			printf("enter length and breadth of rectangle\n");
			scanf("%f%f",&len,&breadth);
			area=(float)len*breadth
			printf("\narea of rectangle is %f",area);
			break;
		case 3:
			float radius,area;
			printf("enter radius of circle\n");
			scanf("%f",&radius);
			area=(float)3.14159*radius*radius;
			printf("\narea of circle is %f",area);
			break;
		   
	}
}
