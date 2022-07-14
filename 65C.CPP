#include<stdio.h>
#include<conio.h>

void main()
{
	int num1,num2,i,j;
	clrscr();
	printf("enter num1 less than num2 :");
	scanf("%d",&num1);
	printf("enter num2 greater than num1 :");
	scanf("%d",&num2);
	for(i=num1; i<=num2; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n \n");
	}
	getch();
}