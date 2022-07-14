#include<stdio.h>
#include<conio.h>

void main()
{
	int num,rem,sum=0,temp;
	clrscr();
	printf("enter the number=");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	if(temp==sum)
	{
		printf("%d it is armstrong number",temp);
	}
	else
	{
		printf("%d it is not armstrong number",temp);
	}
	getch();
}