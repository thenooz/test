#include<ostream>
#include<conio.h>
void amount(float p,int t=2,float r=0.08);
void amount(float p,int t,float r)
{
	cout<<p<<"\t"<<t<<"\t"<<r<<"\t"<<p*r*t;
}
int main()
{

	amount(2000);
	cout<<'\n';
	amount(2000,3);cout<<'\n';
	amount(2500,3,0.11);cout<<'\n';
	amount(2000,0.12);cout<<'\n';
	getch();
	return 0;
}
