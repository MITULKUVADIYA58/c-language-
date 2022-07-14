#include<stdio.h>
#include<conio.h>

void main()
{
	int num1=0,num2=1,num3=1,i,num,sum;
	clrscr();
	printf("enter the number=");
	scanf("%d",&num);
	printf("\n %d %d %d",num1,num2,num3);
	for(i=2; i<num; i++)
	{
		sum=num1+num2+num3;
		printf(" %d ",sum);
		num1=num2;
		num2=num3;
		num3=sum;
	}
	getch();
 }
