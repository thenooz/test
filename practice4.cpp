#include<iostream>
using namespace std;


void add(int);
void show();
struct node{
	int data; node *link;
}*start,*t,*r,*temp;
int main()
{
	char ch='y';int a;
	
	while(ch=='y')
	{
		cout<<"\nEnter the value:";cin>>a;add(a);
		cout<<"Wanna add more data?";cin>>ch;cout<<endl;
	}
	
	show();
}
void add(int a)
{
	temp=r=start;t=new node;t->data=a;t->link=NULL;
	if(start==NULL)
	{
		start=t;
	}
	else
	{
		if(start->data>a)
		{
			t->link=start;
			start=t;return;
		}
		while(temp->data<=a)
		{
			r=temp;
			temp=temp->link;
			if(temp==NULL)break;
		}
		t->link=temp;
		r->link=t;
	}
}
void show()
{
	t=start;
	if(start==NULL){
		cout<<"NO data!";return;
	}
	else
	{
		while(t!=NULL)
		{
			cout<<t->data<<"\t";
			t=t->link;
		}
	}
}
