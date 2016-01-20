#include<iostream>
using namespace std;
void hello();
class test{
	int data; int data2;
	public:
		test(){data=data2=0;
		}
		test(int a, int b):data(a),data2(b)
		{
			
		}
		void disp()
		{
			cout<<endl<<data<<" "<<data2;	
		}
		
		test operator+(test t)
		{
			test temp(1,1);
			temp.data=data+t.data;
			temp.data2=data2+t.data2;
			return temp;			
		}
		test operator+(int i)
		{
			//test temp;
			data=data+i;
			data2=data2+i;//hello();
			//return temp;
		}
		friend void hello();
};

int main()
{
	test t(20,11),t2(1,4),t3;
	t+2;
	t.disp();
		hello();
	return 0;
}
void hello()
{
	test t(20,1);
	cout<<"\nHello!!!"<<t.data;//  Friend function can access private members
}
