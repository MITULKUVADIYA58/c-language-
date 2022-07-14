#include<stdio.h>
#include<conio.h>

void main()
{       int num1=10,num2=5,num3=15;
	clrscr();
	printf("before swapping value of num1= %d num2= %d num3= %d\n",num1,num2,num3);
	num1=num1+num2+num3;
	num3=num1-num2-num3;
	num2=num1-num2-num3;
	num1=num1-num2-num3;
	printf("after swapping value of num1= %d num2= %d num3= %d",num1,num2,num3);
	getch();
}