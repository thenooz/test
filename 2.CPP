#include<iostream.h>
#include<conio.h>
 class outer
 { int a;
   class inner
   { int b;
     public:int c;
     void prn(void)
     {
      cout<<endl<<"Inner::prn()"<<endl;
      cout<<b<<' '<<c<<endl;
      }
      inner()
      {
       b=5;c=10;}
    };
    inner ob1;
    public:inner ob2;
    void second(void)
    {
     cout<<endl<<"Outer::second()"<<endl;
     cout<<ob2.c<<endl;
     cout<<"A="<<a<<endl;
     ob1.prn();
     }
     outer(){a=25;}
};
void main()
{
 outer ab;
 ab.second();
 ab.ob2.prn();
 }