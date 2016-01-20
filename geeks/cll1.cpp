#include<iostream>
//#include<conio>

using namespace std;             //1. Split a circular linked list into two
                                 //2. Sorted insert in circular linked list
struct node{
	int data;
	node *link;
}*head,*tail,*a,*b,*temp;

void ins(int a);
void split();
void show(node *);
void sort_ins(int);

int main()
{
	head=tail=NULL;
	char ch='y';int a;
	
	while(ch=='y')
	{
		cout<<"\nEnter the value of an element:";cin>>a; sort_ins(a);
		cout<<"\nDo you want to add anothe element(y/n)";cin>>ch;
	}
	show(head);
	split();
	return 0;
}
void ins(int a)
{
	temp=head;
	if(head==NULL)
	{
		head=new node;
		head->data=a;
		head->link=head;
		return;
	}
	while(temp->link!=head)temp=temp->link;
	temp->link=new node;
	temp->link->data=a;
	temp->link->link=head;
}
void split()
{
	a=b=head;node *c=head,*d;
	while(b->link!=head&&b->link->link!=head)
	{
		a=a->link;b=b->link->link;
	}
	temp=a->link;
	a->link=c;
	a=temp;
	d=a;
	while(a->link!=head)a=a->link;
	a->link=d;
	cout<<"\nFirst list:";show(c);
	cout<<"\nSecond list:";show(d);
}
void show(node *f)
{
	temp=f;
	while(temp->link!=f)
	{
		cout<<temp->data<<"\t";temp=temp->link;
	}
	cout<<temp->data;"\t";
}
void sort_ins(int a)
{
	node *prev;
	if(head==NULL)
	{
		head=new node;
		head->data=a;
		head->link=head;
		return;
	}
	temp=head;
	while(temp->link!=head)temp=temp->link;
	prev=temp;
	temp=head;
	while(temp->data<a)
	{
		temp=temp->link;
		prev=prev->link;
		if(temp==head)break;
	}
	prev->link=new node;
	prev->link->data=a;
	prev->link->link=temp;
	if(prev->link->data<head->data)head=prev->link;
	//show(head);
}
