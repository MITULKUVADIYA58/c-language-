#include<stdio.h>
#include<conio.h>

void main()
{       int num=1;
	clrscr();
	while(num<=5)
	{
		printf(" %d ",num*num*num);
		num++;
	}
	getch();
}