#include<stdio.h>
#include<conio.h>

void main()
{       int lenth,width;
	clrscr();
	printf("enter lenth=");
	scanf("%d",&lenth);

	printf("enter width=");
	scanf("%d",&width);

	printf("area of rectangle=%d\n",lenth*width);
	printf("perimeter of rectangle=%d\n",(2*(lenth+width)));
	getch();
}