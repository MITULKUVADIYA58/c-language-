#include<stdio.h>
#include<conio.h>

void main()
{
	int row,col;
	clrscr();
	for(row=1; row<6; row++)
	{
		for(col=1; col<6; col++)
		{
			if(row==1||row==5||col==1||col==5)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	      }
	      getch();
}