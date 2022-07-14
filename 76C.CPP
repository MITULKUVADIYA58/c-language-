#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[20],size,i,del,count=0;
	clrscr();
	printf("enter array size=");
	scanf("%d",&size);

	printf("\nenter array element=\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to delete:");
	scanf("%d",&del);
	for(i=0; i<size; i++)
	{
		if(arr[i]==del)
		{
			for(int j=i; j<(size-1); j++)
			{
				arr[j]=arr[j+1];
			}
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("element no found\n");
	}
	else
	{
		printf("\nelement deleted successfully\n");
		printf("\nnow the new array is\n");
		for(i=0; i<(size-1); i++)
		{
			printf("\n%d",arr[i]);
		}
	}
	printf("\n");
	getch();
}