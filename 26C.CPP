#include<stdio.h>
#include<conio.h>

void main()
{       int phy,chem,maths,eng,com,total,avg;
	clrscr();
	printf("enter phy marks=");
	scanf("%d",&phy);

	printf("enter chem marks=");
	scanf("%d",&chem);

	printf("enter maths marks=");
	scanf("%d",&maths);

	printf("enter eng marks=");
	scanf("%d",&eng);

	printf("enter com marks=");
	scanf("%d",&com);

	total=phy+chem+maths+eng+com;
	printf("\ntotal= %d\n",total);

	avg=total/5;
	printf("\npercentage= %d\n",avg);
	if(avg>=75 && avg<=100)
	{
		printf("distination");
	}
	else if(avg>=65 && avg<75)
	{
		printf("first class");
	}
	else if(avg>=50 && avg<65)
	{
		printf("second class");
	}
	else if(avg>=32 && avg<50)
	{
		printf("third class");
	}
	else
	{
		printf("fail");
	}


	getch();
}