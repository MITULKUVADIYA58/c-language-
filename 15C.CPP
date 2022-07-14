#include<stdio.h>
#include<conio.h>

void main()
{       int num;
	clrscr();
	printf("enter number=");
	scanf("%d",&num);
	(num%2==0)?printf("num is even"):printf("num is odd");
	getch();
}