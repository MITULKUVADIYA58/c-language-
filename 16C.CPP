#include<stdio.h>
#include<conio.h>

void main()
{       int num1,num2,num3;
	clrscr();
	printf("enter first value=");
	scanf("%d",&num1);

	printf("enter second value=");
	scanf("%d",&num2);

	printf("enter third value=");
	scanf("%d",&num3);

	(num1>num2 && num1>num3)?printf("num1 is grater"):(num2>num3 && num2>num1)?printf("num2 is grater"):printf("num3 is grater");
	getch();
}