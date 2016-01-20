#include<iostream>
using namespace std;
                        //1.Reverse a linked list
struct node{            //2.To detect a loop in a linked list- Floyd's cycle finding algo
	int data;           //3.Check if a linked list is palindrome
	node *link;
}*f,*n,*temp,*he,*top;

void add(node **,int);
void show(node *);
node * rev(node *);

bool iflooppres(node *);

bool ifpal(node *);
int count(node *);
void push(int);
int pop();

int main()
{
	node *head=NULL;char ch='y';int a;top=NULL;
	while(ch=='y')
	{
		cout<<"\nEnter data:";cin>>a;add(&head,a);
		cout<<"Wanna enter more data?";cin>>ch;
	}
	show(head);
	cout<<"\nIf palindrome?"<<ifpal(head);
	//cout<<"If loop present?"<<iflooppres(head);
	//rev(head);head->link=NULL;
	//show(he);
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

node * rev(node *h)
{
	node *r;
	if(h->link!=NULL)
	{
		r=rev(h->link);
		r->link=h;
	}
	if(h->link==NULL){
		he=h;
	}
	return h;
}
bool iflooppres(node *h)
{
	f=n=h;f=f->link;n=n->link->link;
	for(;n!=NULL&&n->link!=NULL;f=f->link,n=n->link->link)
	{
		if(f==n)return true;
	}
	return false;
}
bool ifpal(node *h)
{
	int c=count(h);int i;
	for(i=0;i<c/2;i++)
	{
		push(h->data);
		h=h->link;
	}
	if(c%2==1)h=h->link;
	for(i=0;i<c/2;i++)
	{
		if(pop()!=h->data)return false;
		h=h->link;
	}
	
	return true;
}
void push(int a)
{
	node *e=new node;e->data=a;e->link=top;
	top=e;
}
int pop()
{
	node *temp=top;
	top=top->link;int a=temp->data;delete temp;
	return a;
}
int count(node *h)
{
	int c=0;
	for(;h!=NULL;h=h->link)c++;
	return c;
}
