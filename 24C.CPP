#include<stdio.h>
#include<conio.h>

void main()
{       int quantity,total;
	clrscr();
	printf("enter quantity=");
	scanf("%d",&quantity);

	total=100*quantity;

	if(total>=1000)
	{
		total=total*0.1;
		printf("\n discount 10 percent apply %d",total);
	}
	else
	{
		printf("\n discount 10 percent not apply %d",total);
	}
	getch();
}