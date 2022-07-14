#include<stdio.h>
#include<conio.h>

void main()
{       int num1=58,num2=59,num3=60,temp;
	clrscr();
	printf("before swapping value of num1= %d num2= %d num3= %d\n",num1,num2,num3);
	temp=num1;
	num1=num2;
	num2=num3;
	num3=temp;
	printf("after swapping value of num1= %d num2= %d num3= %d",num1,num2,num3);
	getch();
}