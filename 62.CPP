#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int i;
		for(i=2; i<=20; i+=2)
		cout<<" "<<i;
	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}