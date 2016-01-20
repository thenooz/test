#include<iostream>
using namespace std;
                        //
struct node{            //
	int data;           //
	node *link;
}*f,*n,*temp,*he,*top;

void add(node **,int);
void show(node *);


int main()
{
	node *head=NULL;char ch='y';int a;top=NULL;
	while(ch=='y')
	{
		cout<<"\nEnter data:";cin>>a;add(&head,a);
		cout<<"Wanna enter more data?";cin>>ch;
	}
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

