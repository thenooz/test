#include<iostream.h>
#include<conio.h>
class a
{
 public:
  int c,b;
  a(int i=0,int j=0):c(i){b=j;}
  void prn(){cout<<'\n'<<c<<' '<<b; }
  };
void main()
{ clrscr();
 a l(20,30),m;
 l.prn();
 a(5,10).prn();
 // cout<<l.c<<'\t'<<l.b;
 getch();
 }

