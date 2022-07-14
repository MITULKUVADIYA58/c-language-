#include<stdio.h>
#include<conio.h>


void main()
{
	int num1,num2,i,sum=0;
	long int multi=1;
	clrscr();
	printf("enter value smaller than value2 :");
	scanf("%d",&num1);

	printf("enter value bigger than value1 :");
	scanf("%d",&num2);

	for(i=num1; i<=num2; i++)
	{
		sum=sum+i;
		multi=multi*i;
	}
	printf("sum=%d\n",sum);
	printf("multiplcation=%d\n",multi);
	getch();
}
