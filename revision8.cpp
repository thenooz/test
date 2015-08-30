#include<iostream>
using namespace std;
struct node{
	int dat;
	node *next;
}*q,*s,*e;
void ins(int a);
void show();
int main()
{
	s=e=NULL;
	int a; char ch='y';
	while(ch=='y')
	{
		cin>>a;
		ins(a);
		cout<<"\nWant to add more elements?(y/n)";cin>>ch;
	}
	
	show();
	
	return 0;
}
void ins(int a)
{
	if(s==NULL)
	{
		s=new node;
		s->dat=a;
		s->next=s;
		e=s->next;
	}
	else
	{
		e->next=new node;
		e->next->dat=a;
		e=e->next;
		e->next=s;
	}
}
void show()
{
	for(q=s;q->next!=s;)
	{
		cout<<"->"<<q->dat;
		q=q->next;
	}
	cout<<"->"<<q->dat;
}
