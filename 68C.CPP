#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,arr[20],max,min,n;
	clrscr();
	printf("enter size of array=");
	scanf("%d",&n);
	printf("enter array elements=");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0; i<n; i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	min=arr[0];
	for(i=0; i<n; i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("maximum=%d\n",max);
	printf("minimum=%d\n",min);
	getch();
}
