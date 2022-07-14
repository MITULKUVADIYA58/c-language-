#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,r1,c1,r2,c2,k;
	int arr1[10][10],arr2[10][10],multi[10][10];
	clrscr();
	printf("enter row & column size for 1st matrix:");
	scanf("%d %d",&r1,&c1);
	printf("enter row & column size for 2nd matrix:");
	scanf("%d %d",&r2,&c2);
	while(c1 != r2)
	{
		printf("enter column of 1st matrix not equal to row of 2nd matrix:");
		printf("enter row & column size for 1st matrix:");
		scanf("%d %d",&r1,&c1);
		printf("enter row & column size for 2nd matrix:");
		scanf("%d %d",&r2,&c2);
	}
	printf("\nenter elements of matrix:\n");
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c1; j++)
		{
			printf("enter element arr1[%d][%d]=%d",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\nenter elements for matrix2:\n");
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++)
		{
			printf("enter element arr2[%d][%d]=",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			multi[i][j]=0;
		}
	}
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			for(k=0; k<c1; k++)
			{
				multi[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	printf("\noutput of matrix:\n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			printf("%d",multi[i][j]);
		}
		printf("\n");
	}
	getch();
}
