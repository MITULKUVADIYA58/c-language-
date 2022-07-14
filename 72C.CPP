#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,temp;
	int arr[10]={12,34,56,78,45,65,67,98,23,40};
	clrscr();
	for(i=0; i<10; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if(arr[j]>arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("printing descending order sorted element list...\n");
	for(i=0; i<10; i++)
	{
		printf("\n %d",arr[i]);
	}
	for(i=0; i<10; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nprinting Acending order sorted element list...\n");
	for(i=0; i<10; i++)
	{
		printf("\n %d",arr[i]);
	}
	getch();
}