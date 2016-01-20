#include<iostream>
#include<cstdlib>

using namespace std;

class test{
	int a;string n;
	public:
		test(int d=0, string k="LOL")
		{
			a=d;n=k;
		}
		void show()
		{
			cout<<endl<<a<<'\t'<<n;
		}
		void *operator new(size_t size)
		{
			void *n=malloc(size);
			cout<<"\nCongratulations! You got the "<<size<<" bytes you wanted!";
			return n;
		}
		void operator delete(void *l)
		{
			free(l);
			cout<<"\nLooks like somebody has neen deleted. I\'m not gonna say who, though.";
		}
		friend void operator <<(ostream &o, test &t);
		friend int operator >>(istream &i, test &t);
};
void operator <<(ostream &o, test &t)
{
	o<<"\nLOL man. Don\'t be afraid. This is just like the getter but better!";
	o<<"\nSo, we have a="<<t.a<<" and n="<<t.n;
}
int operator >>(istream &i, test &t)
{
	i>>t.a>>t.n;
	return 1;	
}

int main()
{
	test *t=new test(19);
	//t->show();
	cout<<(cin>>*t);           //that means if an operator has a return type then it means the whole...
	cout<<*t;				 //expression would return a value of the return type which can be equated to...
						     // a variable or can be output to the console
	delete t;
	
	return 0;
}
