#include<stdio.h>
int reverse(int num);
int ispalindrome(int num);
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(ispalindrome(num)==1)
	{
		printf("the given number is palindrome.");
	}
	else
	{
		printf("the given number is not palindrome.");
	}
	return 0;
	
}
int ispalindrome(int num)
{
	if(num==reverse(num))
	{
		return 1;
	}
	return 0;
}
int reverse(int num)
{
	int rem;
	static int sum=0;
	if(num!=0)
	{
		rem=num%10;
		sum=sum*10+rem;
		reverse(num/10);
	}
	else
		return sum;
	return sum;
}
