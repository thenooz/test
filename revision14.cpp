#include<iostream>
using namespace std;

class test{
	int data;
	public:
	test()
	{
		data=0;
	}
	test(int a):data(a){}
	
	test operator++(int){      //postfix
		test t(*this);
		data+=1;
		return t;
	}
	void operator++()
	{
		data++;
	}
	void show()
	{
		cout<<endl<<data;
	}
	int operator[](int n)
	{
		return data*n;
	}
	void operator()(int m)
	{
		data=m*2;
		//return *this;
	}
	test *operator ->()
	{
		return this; 
	}
	test operator=(int a)
	{
		data=a;
		return *this;
	}	
};
int main()
{
	test l=test(20)++,k;
	l.show();
	l++;++l;
	l.show();
	//cout<<endl<<l[7];
	l(20);
	l.show();
	l->show();
	l=25;
	l.show();
	
	return 0;
}

