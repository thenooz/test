#include<iostream>
using namespace std;
void insert(int a);
int del();
void show();

int q[5];int *s=NULL,*e=NULL;
int main()
{
	s=e=q;char ch='y';int a;
	while(ch=='y')
	{
		cin>>a;insert(a);
		cout<<"\nWant to enter more elements?(y/n)";cin>>ch;
	}
	
	cout<<"\nThe deleted elements are:"<<del()<<" "<<del();cout<<endl;
	show();
	return 0;
}
void insert(int a)
{
	if(e<(q+4))
	{
		*e=a;e++;
	}
	else if(e==q+4&&s>q+0)
	{
		*e=a;e=0;
	}
	else if(e==q+4&&s==q+0)
	{
		*e=a;
		cout<<"\nCaution:Overflow!!!";
	}
}
int del()
{
	int t;
	if(s==e)
	{
		cout<<"\nUnderflow!!";
		return 0;
	}
	else if(s<q+4&&s!=e)
	{
		t=*s;
		s++;return t;
	}
	else if(s==q+4&&s!=e)
	{
		t=*s;
		s=0;return t;
	}
}
void show()
{
	int *i;
	if(s==e)
	{
		cout<<"\nNothing here";
	}
	else if(s<e)
	{
		for(i=s;i<=e;i++)
		{
			cout<<*i<<"->";
		}
	}
	else if(e<s)
	{
		for(i=s;i<=q+4;i++)
		{
			cout<<*i<<"->";
		}
		for(i=0;i<=e;i++)
		{
			cout<<*i<<"->";
		}
	}
}
