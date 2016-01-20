#include<iostream>          //perfect in first go
using namespace std;

struct node{
	int data;
	node *l, *r; bool le,ri;
}*root,*t,*q;

void ins(int a);
void display(node *r);
void del(int a);
int main()
{
	int a;char ch='y';
	while(ch=='y')
	{
		cin>>a;ins(a);
		cout<<"\nAdd more data?(y/n)";cin>>ch;
	}
	display(root);
	for(int i=0;i<4;i++)
	{
		cout<<"\nEnter data to be deleted:";cin>>a;
		del(a);cout<<"\n";display(root);
	}
	return 0;
}
void ins(int a)
{
	t=new node;
	t->data=a;
	t->le=true;
	t->ri=true;
	if(root==NULL)
	{
		root=new node;root->data=-9999;
		root->le=false;root->l=t;
		root->ri=false;root->r=root;
		t->l=root;t->r=root;
	}
	else
	{
		q=root->l;
		while(q!=root)
		{
			if(q->data>a)
			{
				if(q->le!=true)
				q=q->l;
				else
				{
					t->l=q->l;
					q->le=false;q->l=t;
					t->r=q;
					break;
				}
			}
			else
			{
				if(q->ri!=true)
				q=q->r;
				else
				{
					t->r=q->r;
					q->ri=false;q->r=t;
					t->l=q;
					break;
				}
			}
		}
	}
}
void display(node *r)
{
	r=root->l;
	
	
	while(r!=root)
	{
		while(r->le==false)
		r=r->l;
		cout<<"->"<<r->data;
	
		while(r->ri==true)
		{
			r=r->r;if(r!=root)cout<<"->"<<r->data;
		}
		r=r->r;
	}	
}
void del(int a )
{
	t=root->l;node *dad,*temp;dad=root;
	while(1)
	{
		if(a==t->data)
		{
			break;
		}
		else
		{
			if(a<t->data&&t->le==false)
			{
				dad=t;
				t=t->l;
			}
			else if(a>=t->data&&t->ri==false)
			{
				dad =t;
				t=t->r;
			}
			else 
			{
				cout<<"Not found!!!";goto end;
			}
		}
	}
	
	if(t->le==true&&t->ri==true)
	{
		if(dad->l==t)
		{
			dad->l=t->l;dad->le=true;
		}
		else
		{
			dad->r=t->r;dad->ri=true;
		}
	}
	else if(t->le==false&&t->ri==true)
	{
		if(t->l->r==t)t->l->r=t->r;
		if(dad->l==t)
		{
			dad->l=t->l;
			delete t;
		}
		else
		{
			dad->r=t->l;
			delete t;
		}
	}	
	else if(t->ri==false&&t->le==true)
	{
		if(t->r->l==t)t->r->l=t->l;
		if(dad->l==t)
		{
			dad->l=t->r;
			delete t;
		}
		else
		{
			dad->r=t->r;
			delete t;
		}
	}	
	else if(t->le==false&&t->ri==false)
	{		
		temp=t->l;
		while(temp->ri==false)
		{
			temp=temp->r;
		}
		temp->r=t->r;temp->ri=false;
		dad->l=t->l;
		delete t;
	}
	
	
	end:;
}
