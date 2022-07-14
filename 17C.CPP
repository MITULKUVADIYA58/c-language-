#include<stdio.h>
#include<conio.h>

void main()
{       float c,f;
	clrscr();
	printf("enter temprature in fahreneit=");
	scanf("%f",&f);

	c=((f-32)*5)/9,f;
	printf("temprature in celsius=%f",c);
	getch();
}