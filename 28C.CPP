#include<stdio.h>
#include<conio.h>

void main()
{       int held,attend,avg;
	clrscr();
	printf("number of classes held by teacher:");
	scanf("%d",&held);

	printf("number of classes attend by student:");
	scanf("%d",&attend);

	avg=(attend*100)/held;
	printf("percentage of classes attended by students %d",avg);

	if(avg>75)
	{
		printf("\nyou will eligible to give exam");
	}
	else
	{
		printf("\nyou will not eligible to give exam");
	}


	getch();
}