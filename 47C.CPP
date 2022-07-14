#include<stdio.h>
#include<conio.h>

void main()
{
	int num,rem,sum=0,temp;
	clrscr();
	printf("enter the number :");
	scanf("%d",&num);

	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=(sum*10)+rem;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("%d is palindrome number",temp);
	}
	else
	{
		printf("%d is not palindrome number",temp);
	}
	getch();
}
