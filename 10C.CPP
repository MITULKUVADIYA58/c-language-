#include<stdio.h>
#include<conio.h>

void main()
{
	int num1,num2,num3,num4;
	clrscr();
	printf("enter first number=");
	scanf("%d",&num1);

	printf("enter second number=");
	scanf("%d",&num2);

	printf("sum of two number=%d\n",num1+num2);
	printf("product of two number=%d",num1*num2);

	num3=(num1+num2)+(num1*num2);
	printf("\nadditon of sum and product=%d",num3);
	num4=(num1+num2)*(num1*num2);
	printf("\nmultipliacation of sum and product=%d",num4);
	getch();
}