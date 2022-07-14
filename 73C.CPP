#include<stdio.h>
#include<conio.h>

void main()
{

	int num,i,r,arr[30];
	clrscr();
	printf("enter size of array:");
	scanf("%d",&num);
	printf("enter elements:");
	for(i=0; i<num; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to serch:");
	scanf("%d",&r);
	i=0;
	while(i<num && r!=arr[i])
	{
		i++;
	}
	if(i<num)
	{
		printf("the element is found in the position %d=%d",i+1,r);
	}
	else
	{
		printf("element not found:");
	}
	getch();
}
