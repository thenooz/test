#include<iostream>
using namespace std;

struct node{
	int data;
	node *link;
}*top,*temp,*r,*front,*end;

void add(int a);
void dlt();
void show();
int main()
{
	char ch='y';int a;
	while(ch=='y')
	{
		cout<<"Enter data:";cin>>a;add(a);
		cout<<"Wanna add more data?";cin>>ch;
	}
	dlt();
	cout<<"\nAfter deleting: ";show();
	
	return 0;
}

void add(int a)
{
	temp=new node;temp->data=a;temp->link=NULL;
	if(front==NULL)
	{
		front=end=new node;
		front->data=a;front->link=NULL;
	}
	else
	{
		end->link=temp;
		end=temp;
	}
}
void dlt()
{
	temp=front;
	front=front->link;
	delete temp;
}
void show()
{
	temp=front;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->link;
	}
}

/*void push(int);
void pop();
void show();
int main()
{
	char ch='y';int a;top=NULL;
	while(ch=='y')
	{
		cout<<"\nEnter data:";cin>>a;push(a);
		cout<<"Wanna add more data?";cin>>ch;
	}
	show();
	pop();pop();
	cout<<"\nAfter popping: ";show();
	
	
	return 0;
}
void push(int a)
{
	temp=new node;
	temp->data=a;temp->link=top;
	top=temp;
}
void pop()
{
	cout<<"\nPopped item:"<<top->data;temp=top;
	top=top->link;delete temp;	
}
void show()
{
	temp=top;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->link;
	}
}*/
