#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[20],pos,i,num,value;
	clrscr();
	printf("enter size of array:");
	scanf("%d",&num);
	printf("enter elements are:\n");
	for(i=0; i<num; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the position where you want to insert the element :");
	scanf("%d",&pos);
	printf("enter the value:");
	scanf("%d",&value);
	for(i=num; i>=pos; i--)
	{
		arr[i]=arr[i-1];
	}
	arr[i]=value;
	printf("final array:\n");
	for(i=0; i<=num; i++)
	{
		printf("%d\n",arr[i]);
	}
	getch();
}