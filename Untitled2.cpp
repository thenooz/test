#include<iostream>
#include<sstream>
#include<stdio.h>


using namespace std;

class test
{
	public:
		static void func()
		{
			cout<<"You have entered the func()";
		}
};

using namespace std;

int main()
{
	/*int *a[10];
	a[0]=new int[4];
	a[0][2]=10;
	//cout<<a[0][2];
	stringstream s;
	s<<10<<" "<<20;
	cout<<s.str();*/
	int b=10; /*int c=b++ + ++b + b;
	cout<<c;*/
	//printf("%d",b++ + ++b + b++);
	
	test::func();
	
	return 0;
}
