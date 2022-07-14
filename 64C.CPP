#include<stdio.h>
#include<conio.h>


void main()
{
	int num,m=0,i,flag=0;
	clrscr();
	printf("enter number :");
	scanf("%d",&num);
	m=num/2;
	for(i=2; i<=m; i++)
	{
		if(num%i==0)
		{
			printf("%d the no is not prime",num);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d it is prime no",num);
	}
	getch();
}
