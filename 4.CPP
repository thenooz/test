#include<iostream.h>
#include<conio.h>
class base{ public:
	    int l;
	    base(int a,int f):l(a),d(f)   //mem-initialisation list
	    {}
	    protected:int d;
	    };
class base2{public:
	    int t; base2(int a)
	    {t=a;}                        //initialisation inside the body
	    };
class derived:private base, public base2  //multiple inheritence
	 { public: base::l;               //selectively declared as public
	   derived(int b, int j,int c):base(b,j),base2(c)
	   {}
	   protected: base::d;      //base class privately inherited
	 };                         //d redeclared protected
class d2:public derived
	 { public:
	 d2(int b,int j,int c):derived(b,j,c)
	 { cout<<"base::d="<<d;} //protected section of derived
	 };
void main()
{clrscr();
 d2 e(10,20,30);
 cout<<"\n base::l= "<<e.l<<"\tbase::t="<<e.t;
 getch();
 }
/* If a class inherits PRIVATELY or PROTECTEDLY from base class then
   it's data members can be selectively redeclared as public
   or protected in the derived class.
*/