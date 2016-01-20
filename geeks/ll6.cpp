#include<iostream>
using namespace std;
                        //1. Reverse a linked list in a groups of given number
struct node{            //2. Delete nodes which have greater value on the right hand side 
	int data;           //3. Add two numbers represented by linked lists
	node *link;
}*f,*temp,*head,*top,*last;

void add(node **,int);
void show(node *);

node * rev(node *,int );int c,count,len;
void dlrb(node *);
node * addt(node *,node *);

int main()
{
	head=NULL;char ch='y';int a;top=NULL;len=0;int h;
	while(ch=='y')
	{
		cout<<"\nEnter data:";cin>>a;add(&head,a);
		cout<<"Wanna enter more data?";cin>>ch;
	}
	show(head);add(&top,5);add(&top,3);add(&top,2);add(&top,9);add(&top,6);show(top);
	//cout<<"\nEnter the number of elements in a group:";cin>>c;count=0;
	//head=rev(head,c);
	//dlrb(head);
	f=addt(head,top);
	//show(f);
	
	return 0;
}

void add(node **h,int a)
{
	node *b=*h;len++;
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
	temp=h;cout<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->link;
	}
}
node * rev(node *h,int k)
{
	node *prev=NULL;
	node *curr=h;
	node *ne=NULL;
	int count=0;
	while(curr!=NULL&&count<k)
	{
		count++;
		ne=curr->link;
		curr->link=prev;
		prev=curr;
		curr=ne;
	}
	if(ne!=NULL)
	h->link=rev(curr,k);
	return prev;
}
void dlrb(node *h)
{
	node *t=h,*r=h->link,*temp,*prev;
	while(t!=NULL)
	{
		r=t->link;
		while(r!=NULL)
		{
			if(t->data<r->data)
			{
				if(t==head)
				{
					head=t->link;
					delete t;
					t=head;
					continue;
				}
				else
				{
					prev->link=prev->link->link;
					delete t;
					t=prev->link;
				}
			}
			r=r->link;
		}
		prev=t;
		t=t->link;
	}
}
node * addt(node *a,node *b)
{
	node *c,*l;c=new node;c->data=0;c->link=NULL;l=c;int carry=0;
	while(a!=NULL||b!=NULL)
	{
		if(a!=NULL&&b!=NULL)
		{
			//l->link=new node;
			l->data=a->data+b->data+carry;
			a=a->link;b=b->link;
		}
		else if(a!=NULL)
		{
			//l->link=new node;
			l->data=a->data+carry;
			a=a->link;
		}
		else if(b!=NULL)
		{
			//l->link=new node;
			l->data=b->data+carry;
			b=b->link;
		}
		if(l->data>9)
		{
			carry=1;
			l->data=l->data-10;
		}
		else carry=0;
		l->link=new node;
		l=l->link;
	}
		l->data=-1;l->link=NULL;
			show(c);
}
