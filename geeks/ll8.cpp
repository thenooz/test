#include<iostream>
using namespace std;
                        //1. Swap kth node from the front with kth  node from the back
struct node{            //
	int data;           //
	node *link;
}*f,*n,*temp,*he,*top,*head;

void add(node **,int);
void show(node *);
void swap(node *, int k,int );
int count(node *);
int c;

int main()
{
	head=NULL;char ch='y';int a,k;top=NULL;
	//int k=5>0?2:3;
	//cout<<k;
	while(ch=='y')
	{
		cout<<"\nEnter data:";cin>>a;add(&head,a);
		cout<<"Wanna enter more data?";cin>>ch;
	}
	show(head);
	c=count(head);
	cout<<"\nEnter k:";cin>>k;
	if(c!=1)
	swap(head,k,c);
	show(head);
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
void show(node *h)
{
	temp=h;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->link;
	}
}
int count(node *h)
{
	int a=0;
	for(a=0;h!=NULL;a++,h=h->link);
	return a;
}
void swap(node *h, int k, int c)
{
	node *p1,*p2,*t1,*t2;
	if(k>c/2)k=c-k+1;
	if(k==1)
	{
		for(h=head;h->link->link!=NULL;h=h->link);
		temp=h->link;
		h->link=head;
		temp->link=head->link;
		head->link=NULL;
		head=temp;return;		
	}
	else if(k==c-k+1)return;
	for(int i=1;i<=c;i++,h=h->link)
	{
		if(i==k-1)p1=h;
		if(i==c-k)p2=h;
	}t1=p1->link;t2=p2->link;
	if(k==c-k)
	{
		t1->link=t2->link;
		p1->link=t2;
		t2->link=t1;
		return;
	}
	temp=t2->link;
	t2->link=t1->link;
	t1->link=temp;
	p1->link=t2;
	p2->link=t1;
	return;
}
