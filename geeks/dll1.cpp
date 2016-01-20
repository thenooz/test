#include<iostream>

using namespace std;

struct node{
	int data;
	node *next,*prev;
}*head,*temp;

void ins(int );
void dlt(int);
void show(node *);

int main()
{
	char ch='y';int a;
	
	while(ch=='y')
	{
		cout<<"\nEnter the element:";cin>>a;ins(a);
		cout<<"\nWanna add more elements?(y/n)";cin>>ch;
	}
	show(head);
	cout<<"\nEnter the element you want to delete:";cin>>a;dlt(a);show(head);
	return 0;
}
void ins(int a)
{
	if(head==NULL)
	{
		head=new node;
		head->data=a;
		head->next=head->prev=NULL;return;
	}
	temp=head;
	while(temp->next!=NULL)temp=temp->next;
	temp->next=new node;
	temp->next->data=a;
	temp->next->next=NULL;
	temp->next->prev=temp;
}
void show(node *f)
{
	while(f!=NULL)
	{
		cout<<f->data<<"\t";
		f=f->next;
	}
}
void dlt(int a)
{
	temp=head;
	if(a==head->data){head=head->next;delete temp;return;}
	while(temp!=NULL)
	{
		if(temp->data==a)
		{temp->prev->next=temp->next; delete temp;return;}
		temp=temp->next;
	}
	cout<<"\nNo match found!";
}
