#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,total,multi;
	clrscr();
	printf("enter any number=");
	scanf("%d",&num1);
		for(total=1; total<=10; total++)
		{
			multi=total*num1;
			printf("\n %d*%d=%d\n",num1,total,multi);
		}
	getch();
}
