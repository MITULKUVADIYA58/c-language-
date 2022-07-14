#include<stdio.h>
#include<conio.h>

void main()
{       int year,bonus,salary;
	clrscr();
	printf("enter yourjob year=");
	scanf("%d",&year);
	printf("enter your salary=");
	scanf("%d",&salary);

	if(year>5)
	{
		bonus=salary*0.05;
		printf("\n apply for bonus %d",bonus);
	}
	else
	{
		printf("\n not apply for bonus %d",salary);
	}
	getch();
}