#include<stdio.h>
#include<conio.h>

void main()
{
	int arr1[10],arr2[20],arrmerge[40];
	int num1,num2,i,k;
	clrscr();
	printf("enter 1st array size:");
	scanf("%d",&num1);

	printf("enter elements in array\n",num1);
	for(i=0; i<num1; i++)
	{
		scanf("%d",&arr1[i]);
		arrmerge[i]=arr1[i];
	}
	k=i;
	printf("\nenter 2nd array size:");
	scanf("%d",&num2);

	printf("enter elements in array\n",num2);
	for(i=0; i<num2; i++)
	{
		scanf("%d",&arr2[i]);
		arrmerge[k]=arr2[i];
		k++;
	}
	printf("the merged array\n");
	for(i=0; i<k; i++)
	{
		printf(" %d ",arrmerge[i]);
	}
	printf("\n");
	getch();
}