#include<stdio.h>
#include<conio.h>

void main()
{       int num1,num2;
	clrscr();
	printf("enter first number=");
	scanf("%d",&num1);

	printf("enter second number=");
	scanf("%d",&num2);

	if(num1>num2)
	{
		printf("num1 is grater");
	}
	else
	{
		printf("num2 is grater");
	}
	getch();
}