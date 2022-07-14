#include<stdio.h>
#include<conio.h>

void main()
{       int lenth,width;
	clrscr();
	printf("enter lenth=");
	scanf("%d",&lenth);

	printf("enter width=");
	scanf("%d",&width);

	if(lenth==width)
	{
		printf("this is square");
	}
	else
	{
		printf("this is rectangle");
	}
	getch();
}