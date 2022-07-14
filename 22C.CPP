#include<stdio.h>
#include<conio.h>

void main()
{       int age;
	clrscr();
	printf("enter your age=");
	scanf("%d",&age);

	if(18<=age)
	{
		printf("eligible for voting");
	}
	else
	{
		printf("not eligible for voting");
	}
	getch();
}