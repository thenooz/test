#include<iostream>
using namespace std;

struct node{
	int dat;
	node *next;
}*s,*s2,*temp,*top;
void push(int a);
void pop();
int main()
{
	top=NULL;s=NULL;
	int i, a;char ch='y';
	while(ch=='y')
	{
		cin>>a;
		push(a);
		cout<<"\nWant to enter more elements?";cin>>ch;
	}
	s2=top;
	while(s2!=NULL)
	{
		cout<<s2->dat<<'\t';s2=s2->next;
	}
	
	pop();
	s2=top;
	cout<<"\nAfter popping:";
	while(s2!=NULL)
	{
		cout<<'\t'<<s2->dat;s2=s2->next;
	}
	
	return 0;
}
void push(int a)
{
	if(top==NULL)
	{
		top=new node;
		top->dat=a;
		top->next=NULL;
	}
	else
	{
		s=new node;
		s->dat=a;
		s->next=top;
		top=s;
	}
}
void pop()
{
	s=top;
	top=top->next;
	cout<<"\nPopped element is:"<<s->dat;
	delete s;
}
