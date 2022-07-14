#include<stdio.h>
#include<conio.h>

void main()
{       int num;
	clrscr();
	printf("enter number=");
	scanf("%d",&num);

	if(num%2==0)
	{
		printf("num is even");
	}
	else
	{
		printf("num is odd");
	}
	getch();
}