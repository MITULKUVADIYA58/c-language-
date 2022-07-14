#include<stdio.h>
#include<conio.h>

void main()
{       int num,ans;
	clrscr();
	printf("enter number=");
	scanf("%d",&num);
	ans=(num%2==0);
	switch(ans)
	{
		case 0:
		printf("odd");
		break;

		case 1:
		printf("even");
		break;

	}
	getch();
}