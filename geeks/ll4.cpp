#include<iostream>
using namespace std;
                        //1.Remove duplicates from a sorted list
struct node{            //2.Remove duplicates from unsorted list
	int data;           //3.Pairwise swap elements of a linked list
	node *link;
}*f,*n,*temp,*he,*top;

void add(node **,int);
void show(node *);

void add2(node **,int);
void remdup2(node *);

void swap(node *);

void remdup(node *);
int main()
{
	node *head=NULL;char ch='y';int a;top=NULL;
	while(ch=='y')
	{
		cout<<"\nEnter data:";cin>>a;add2(&head,a);
		//add(&head,a);
		cout<<"Wanna enter more data?";cin>>ch;
	}
	show(head);
	remdup2(head);show(head);
	swap(head);cout<<endl;show(head);
	
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
	if((*h)->data>a)
	{
		temp->link=*h;
		*h=temp;return;
	}
	while(b->data<=a)
	{
		f=b;
		b=b->link;
		if(b==NULL)break;
	}
	temp->link=b;
	f->link=temp;
}
void show(node *h)
{
	temp=h;cout<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->link;
	}
}
void remdup(node *h)
{
	node *t=h,*d;
	while(t!=NULL)
	{
		while(t->link!=NULL&&t->data==t->link->data)
		{
			d=t->link;
			t->link=t->link->link;
			delete d;
		}
		t=t->link;
	}
}

void add2(node **h,int a)
{
	node *k=new node;k->data=a;k->link=NULL;f=*h;
	if(*h==NULL)
	{
		*h=k;return;
	}
	while(f->link!=NULL)
		f=f->link;
		
	f->link=k;
}
void remdup2(node *h)    //removal of duplicates in unsorted list
{
	node *k,*f;
	while(h->link!=NULL)
	{
		for(k=h->link,f=h;k!=NULL;)
		{
			if(k->data==h->data)
			{
				//temp=k;
				f->link=k->link;
				delete k;
				k=f->link;if(k==NULL)break;
			}
			else
			{
				if(k->link==NULL)break;
				k=k->link;f=f->link;
			}
		}
		h=h->link;if(h==NULL)break;
	}
}

void swap(node *h)
{
	f=n=h; int l;
	{
		for(;f!=NULL&&f->link!=NULL;f=f->link->link)
		{
			if(f==NULL)break;
			l=f->data;
			f->data=f->link->data;
			f->link->data=l;
		}
	}
}
