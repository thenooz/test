#include<iostream>
using namespace std;         //Print the middle node of a linked list

struct node{
	int data;
	node *link;
}*o,*t,*temp;

void add(node **,int);
void pr(node *);
int main()
{
	char ch='y';int a;node *head=NULL;
	while(ch=='y')
	{
		cout<<"\nEnter data:";cin>>a;add(&head,a);
		cout<<"Wanna enter more data?";cin>>ch;
	}
	
	pr(head);
	
	return 0;
}

void add(node **h,int a)
{
	node *b=*h;
	temp=new node;temp->data=a;temp->link=NULL;
	if(*h==NULL)
	{
		*h=temp;return;
	}
	while(b->link!=NULL)b=b->link;
	b->link=temp;
}
void pr(node *h)
{
	o=t=h;
	for(;(t!=NULL&&t->link!=NULL);o=o->link,t=t->link->link);
	
	cout<<"The middle node is "<<o->data;
}
