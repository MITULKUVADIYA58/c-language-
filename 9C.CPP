#include<stdio.h>
#include<conio.h>

void main()
{       char ch='d';
	int num;
	clrscr();
	printf("character d ascii value=%d",(int)ch);
	num=(int)ch+3;
	printf("\naddtion after adding 3=%d",num);
	printf("\n alphabet after adding 3=%c",(char)num);
	getch();
}