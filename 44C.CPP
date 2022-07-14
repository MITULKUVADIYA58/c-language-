#include<stdio.h>
#include<conio.h>


void main()
{
	int i,fact=1,num;
	clrscr();
	printf("enter any number=");
	scanf("%d",&num);
		for(i=1; i<=num; i++)
		{
			fact=fact*i;
		}
		printf("factorial of num is: %d",fact);
		getch();
	}
