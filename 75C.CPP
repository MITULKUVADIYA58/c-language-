#include<stdio.h>
#include<conio.h>

void main()
{
	int n=10,temp;
	int arr[10]={2,5,6,4,7,8,3,6,4,10};
	clrscr();
	for(int i=0; i<n/2; i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	for(i=0; i<n; i++)
	{
		printf("\n%d",arr[i]);
	}
	getch();
}
