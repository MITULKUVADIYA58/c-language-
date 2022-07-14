#include<stdio.h>
#include<conio.h>

void main()
{       int num1=10,num2=5;
	clrscr();
	printf("before swapping value of num1=%d  num2=%d\n",num1,num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("after swapping value of num1=%d num2=%d\n",num1,num2);
	getch();
}