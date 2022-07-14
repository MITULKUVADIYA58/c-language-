#include<stdio.h>
#include<conio.h>

void main()
{
		int num,sum=0;
		clrscr();
		for(num=1; num<=10; num++)
		sum=num+sum;
		printf("addition of 1 to 10= %d",sum);
		getch();

}
