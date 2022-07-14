#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[20],n;
	clrscr();
	printf("enter a size of array between 1 to 20=");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("enter number=");
		scanf("%d",&arr[i]);
	}
	printf("value of array is\n");
		for(i=0; i<n; i++)
	{
		printf("arr[%d][%d]=%d\n",i,n,arr[i]);
	}
	getch();
}