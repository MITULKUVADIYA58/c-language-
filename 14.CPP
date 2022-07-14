#include<iostream.h>
#include<conio.h>

void main()
{       int lenth,width;
	clrscr();
	cout<<"enter lenth=";
	cin>>lenth;

	cout<<"enter width=";
	cin>>width;

	cout<<"area of rectangle="<<lenth*width<<endl;
	cout<<"perimeter of rectangle="<<(2*(lenth+width))<<endl;
	getch();
}