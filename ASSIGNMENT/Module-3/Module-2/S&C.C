#include<stdio.h>
#include<conio.h>
void main()
{
      float p,r,n;
      clrscr();
      printf("Enter principal:");
      scanf("%f", &p);
      printf("Enter rate ofinterest:");
      scanf("%f", &r);
      printf("Enter term of the loan:");
      scanf("%f", &n);
      printf("\nsimple int %f", (p*r*n)/100);
      printf("\ncpmpound int %f", p*(1+r)/100);
      getch();

}