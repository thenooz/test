#include<iostream>
using namespace std;
                       //1.Nth node from the end of a linked list
struct node{           //2.Delete the whole linked list
	int data;          //3.Count the number of times an int occurs int the list
	node *link;
}*f,*n,*temp;

void add(node **,int);
void nthfromend(node *,int);
void dltlist(node **);
void count(node *,int);
int main()
{
	node *head=NULL;char ch='y';int a;
	while(ch=='y')
	{
		cout<<"\nEnter data:";cin>>a;add(&head,a);
		cout<<"Wanna enter more data?";cin>>ch;
	}
	count(head,2);
	//nthfromend(head,4);
	//dltlist(&head);
	//if(head==NULL)cout<<"\nDeleted!!";
	
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

void nthfromend(node *h,int a)
{
	f=n=h;
	for(int i=0;i<a;i++)
		n=n->link;
	for(;n!=NULL;n=n->link,f=f->link);
	
	cout<<"Nth node from the end contains:"<<f->data;
}
void dltlist(node **h)
{
	temp=*h;
	for(;temp!=NULL;)
	{
		temp=temp->link;
		if(temp!=NULL)delete *h;
		*h=temp;
	}
}
void count(node *h,int a)
{
	int t=0;
	for(;h!=NULL;h=h->link)
	{
		if(h->data==a)t++;
	}
	
	cout<<"The number of time "<<a<<" occurs in the list is "<<t;
}
