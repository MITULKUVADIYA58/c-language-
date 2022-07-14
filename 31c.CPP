#include<stdio.h>
#include<conio.h>

void main()
{
	int num1,num2,num3;
	clrscr();
	printf("enter 1st number=");
	scanf("%d",&num1);

	printf("enter 2nd number=");
	scanf("%d",&num2);

	printf("put your choice \n1 addition \n2 substraction \n3 multiplication \n4 division \n5 modulo");

	printf("\nenter your choice");
	scanf("%d",&num3);

	switch(num3)
	{
		case 1:
		printf("addition  %d+%d=%d",num1,num2,num3,num1+num2);
		break;

		case 2:
		printf("substraction %d-%d=%d",num1,num2,num3,num1-num2);
		break;

		case 3:
		printf("multiplication %d*%d=%d",num1,num2,num3,num1*num2);
		break;

		case 4:
		printf("division %d/%d=%d",num1,num2,num3,num1/num2);
		break;

		case 5:
		printf("modulo %d%%d=%d",num1,num2,num3,num1%num2);
		break;

		default:
		printf("please enter number between 1 to 5");
		break;
		}
	getch();
}