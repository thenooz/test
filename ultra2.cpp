#include<iostream>
using namespace std;
struct node{
	int dat; 
	node *next;
}*s,*s2;

void add(int a);
void delt(int d);
int main()
{
char ch='y';int a,del;
	while(ch=='y')
	{
		cin>>a;
		add(a);
		
		cout<<"Want to enter more data?";cin>>ch;	
	}
	
	cout<<"Enter data you want to delete:";cin>>del;
	delt(del);
	s2=s;
	while(s2!=NULL)
	{
		cout<<s2->dat<<'\t';
		s2=s2->next;
	}
	return 0;
}
void add(int a)
{
	node *temp;
	if(s==NULL)
	{
		s=new node;
		s->dat=a;
		s->next=NULL;
	}
	else
	{
		temp=s;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new node;
		temp->next->dat=a;temp->next->next=NULL;
	}
}
void delt(int del)
{
	node *temp,*r;
	temp=s;
	if(temp->dat==del)
	{
		temp=s;
		s=s->next;
		delete temp;goto end;
	}
	while(temp->next->dat!=del)
	{
		temp=temp->next;
	}
	
	r=temp->next;
	temp->next=temp->next->next;
	delete r;
	end: ;	
}
