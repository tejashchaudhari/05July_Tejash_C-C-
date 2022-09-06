#include<stdio.h>
int main()
{
	int ch;
	float base,length,breadth,hight,area,radius;
	printf("1.triangle\n2.rectangle\n3.circle\n");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("enter sides of triangle\n");
			scanf("%f%f",&base,&hight);
			area=0.5*base*hight;
			printf("\narea of triangle is %f",area);
			break;
			
		case 2:
			printf("enter length and breadth of rectangle\n");
			scanf("%f%f",&length,&breadth);
			area=length*breadth;
			printf("\narea of rectangle is %f",area);
			break;
			
		case 3:
			printf("enter radius of circle\n");
			scanf("%f",&radius);
			area=3.14159*radius*radius;
			printf("\narea of circle is %f",area);
			break;
		   
	}
	return 0;
}
