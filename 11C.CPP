#include<stdio.h>
#include<conio.h>

void main()
{
	int num1=67,num2=56,temp;
	clrscr();
	printf("before swapping value of num1= %d num2= %d\n",num1,num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("after swapping value of num1= %d num2= %d",num1,num2);
	getch();
}