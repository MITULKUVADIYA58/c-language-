#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[20],n,sum=0,mul=1;
	clrscr();
	printf("enter a size of array between 1 to 20=");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("enter number=");
		scanf("%d",&arr[i]);
	}
	printf("value of array is");
	for(i=0; i<n; i++)
	{
		printf("\narr[%d][%d]=%d\n",i,n,arr[i]);
		sum=sum+arr[i];
		mul=mul*arr[i];
	}
	printf("sum=%d\n",sum);
	printf("multiplication=%d\n",mul);
	getch();
}