#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	clrscr();
	for(i=1; i<=3; i++)
	{
		for(k=i; k<3; k++)
		{
			printf("   ");
		}
		for(j=1; j<(i*2); j++)
		{
			printf(" * ");
		}
		printf("\n");
	      }
	      getch();
}