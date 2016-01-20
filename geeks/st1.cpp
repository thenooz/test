#include<iostream>

using namespace std;			//1. Implement two stacks in an array;

class ts{
	int *arr;
	int size;
	int top1;
	int top2;
	public:
		ts(int n):size(n)
		{
			arr=new int[size];
			top2=size;
			top1=-1;
		}
		void push1(int k)
		{
			if(++top1!=top2)
			arr[top1]=k;
			if(top1==top2)
			cout<<"\nStack Overflow!!";
		}
		void push2(int k)
		{
			if(--top2!=top1)
			arr[top2]=k;
			if(top1==top2)
			cout<<"\nStack Overflow!!";
		}
		void pop1()
		{
			if(top1!=-1)
			{
				cout<<endl<<arr[top1];
				top1--;
			}
			else cout<<"\nStack underflow!!";
		}
		void pop2()
		{
			if(top2!=size)
			{
				cout<<endl<<arr[top2];
				top2++;
			}
			else cout<<"\nStack underflow!!";
		}
};
int main()
{
	int a;
	ts t(5);
	t.push1(3);
	t.push1(2);
	t.push2(1);
	t.push2(4);
	t.push2(5);
	t.pop1();t.pop1();t.pop1();
	t.pop2();
	return 0;
}
