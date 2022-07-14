#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[20],n,sume=0,sumo=0;
	long int mule=1,mulo=1;
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
		if(arr[i]%2==0)
		{
		sume=sume+arr[i];
		mule=mule*arr[i];
		}
		else
		{
			sumo=sumo+arr[i];
			mulo=mulo*arr[i];
		}
	 }
	 printf("\nsum for odd numbers=%d\n",sumo);
	 printf("multiplication for odd numbers=%d\n",mulo);
	 printf("\nsum for even numbers=%d\n",sume);
	 printf("multiplication for even numbers=%d\n",mule);
	 getch();
}