#include<stdio.h>
#include<conio.h>

void main()
{       int n1,n2;
	clrscr();
	printf("enter first value=");
	scanf("%d",&n1);

	printf("enter second value=");
	scanf("%d",&n2);

	printf("addition= %d\n",n1+n2);
	printf("substraction= %d\n",n1-n2);
	printf("multiplication= %d\n",n1*n2);
	printf("divison= %d\n",n1/n2);
	printf("modulo= %d\n",n1%n2);
	getch();
}