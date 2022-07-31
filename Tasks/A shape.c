#include<stdio.h>
int main()
{
    int i,j,n= 19/2;
    char string[20];
    printf("Enter any number:");
    scanf("%s", &string);
    for (i = 0; i < 10; i++) 
	{
        for (j = 0; j <= 19; j++) 
		{
             if (j == n || j == (19 - n)
                || (i == 10 / 2 && j > n
                    && j < (19 - n)))
                printf("%s", string);
            else
                printf(" ");
        }
        printf("\n");
        n--;
    }
    return 0;
}
 
