#include<stdio.h>
#include<conio.h>

void main()
{       char ch;
	clrscr();
	printf("enter any character=");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		printf("%c it is vowel");
		break;

		case 'e':
		printf("%c it is vowel");
		break;

		case 'i':
		printf("%c it is vowel");
		break;

		case 'o':
		printf("%c it is vowel");
		break;

		case 'u':
		printf("%c it is vowel");
		break;

		default:
		printf("it i consonut");
		break;
	}
	getch();
}