#include<stdio.h>
#include<conio.h>

void main()
{       int num1,num2,num3;
	clrscr();
	printf("enter first value num1=");
	scanf("%d",&num1);

	printf("enter second value num2=");
	scanf("%d",&num2);

	printf("enter third value num3=");
	scanf("%d",&num3);

	if(num1>num2 && num1>num3)
	{
		printf("num1 is greater");
	}
	else if(num2>num1 && num2>num3)
	{
		printf("num2 is greater");
	}
	else if(num3>num1 && num3>num1)
	{
		printf("num3 is greater");
	}
	else
	{
		printf("all are equal");
	}
	getch();
}