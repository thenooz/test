#include<iostream>
#include<stdio.h>
using namespace std;
struct node {
	int data;
	node *link;
}*top;

void push(int ch);
int pop();
void prnge(int *);
node *stre(node *);
//void push(int );

int main()
{
	top=NULL;char ch;
	/*while(ch!='\n')
	{
		ch=getchar();if(ch=='{'||ch=='['||ch=='(')push(ch);
		else if(ch==')'&&top->data=='(')pop();
		else if(ch=='}'&&top->data=='{')pop();
		else if(ch==']'&&top->data=='[')pop();
		//else cout<<"\nUnbalanced!!!";
	}
	if(top==NULL)cout<<"\nBalanced!!!";
	else cout<<"\nUnbalanced!!!";*/
	//int arr[]={5,3,4,2,8,6,7};
	//prnge(arr);
	push(1);push(2);push(3);push(4);push(5);push(6);push(7);node *h=top;
	while(h!=NULL)
	{
		cout<<h->data<<"->";
		h=h->link;
	}cout<<endl;
	h=stre(top);h->link=NULL;h=top;
	while(h!=NULL)
	{
		cout<<h->data<<"->";
		h=h->link;
	}
	return 0;
}
void push(int ch)
{
	node *temp;
	if(top==NULL)
	{
		top=new node;
		top->data=ch;
		top->link=NULL;
	}
	else
	{
		temp=new node;
		temp->data=ch;
		temp->link=top;
		top=temp;
	}
}
int pop()
{
	node *temp;int k=top->data;
	if(top!=NULL)
	{
		temp=top;
		top=top->link;
		delete temp;
	}
	return k;
}
node *stre(node *h)
{
	node *t;
	if(h->link==NULL)
	{
		top=h;
		return h;
	}
	t=stre(h->link);
	t->link=h;
	//if(t->link->link=t)h->link=NULL;
	return h;
}
void prnge(int a[])
{
	push(a[0]);
	int i,e,n;
	for(i=1;i<7;i++)
	{
		n=a[i];
		e=pop();
		while(n>e)
		{cout<<"\n"<<e<<"-->"<<n;if(top==NULL)break;e=pop();}
		
		if(n<e)push(e);
		
		push(n);
	}
	while(top!=NULL)
	{
		n=pop();cout<<endl<<n<<"-->"<<-1;
	}
}
