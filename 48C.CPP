#include<stdio.h>
#include<conio.h>


void main()
{
	int num1,rem;
	clrscr();
	printf("enter any num1 :");
	scanf("%d",&num1);
	while(num1>0)
	{
		rem=num1%10;
		if(rem%2==0)
		{
			printf("\n%d is even",rem);
		}
		else
		{
			printf("\n%d is odd",rem);
		}
			num1=num1/10;

		}
		getch();
}
