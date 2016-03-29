#include<iostream>

using namespace std;

class test{
	public:
		int a;
	~test()
	{
		cout<<"\ndestroying:"<<a;
	}
};
int main()
{
	test t[5];
	for(int i=0;i<5;i++)
	t[i].a=i;
	return 0;
}
