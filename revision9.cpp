#include<iostream>
#include<stdlib.h>
using namespace std;

                                //Trees
struct node{
	int data;
	node * r;
	node * l;
}*root,*temp,*k;

void ins(node **,int a);
void in(node *);
void post(node *);
void pre(node *);
void dlt(int a);
int main()
{
	char ch='y';int a;
	while(ch=='y')
	{
		cin>>a;
		ins(&root,a);
		cout<<"\nWant to add more elements(y/n)";cin>>ch;
	}
	//show(root);
	cout<<"\nPreorder:";pre(root);
	cout<<"\n\nPost order:";post(root);
	cout<<"\n\nInorder";in(root);
	for(int i=0;i<4;i++){
		cout<<"\n\nEnter the data to be deleted:";cin>>a;
		dlt(a);
		cout<<endl;in(root);
	}
	return 0;
}
void ins(node **t,int a)
{
	if(*t==NULL)
	{
		*t=new node;
		(*t)->data=a;
		(*t)->l=NULL;
		(*t)->r=NULL;
	}
	else
	{
		if(a<(*t)->data)
		{
			ins(&(*t)->l,a);
		}
		else
		{
			ins(&(*t)->r,a);
		}
	}
}
void in(node *t)
{
	if(t!=NULL)
	{
		in(t->l);
		cout<<"->"<<t->data;
		in(t->r);
	}
	
}
void post(node *t)
{
	if(t!=NULL)
	{
		post(t->l);
		post(t->r);
		cout<<"->"<<t->data;
	}
}
void pre(node *t)
{
	if(t!=NULL)
	{
		cout<<"->"<<t->data;
		pre(t->l);
		pre(t->r);
	}
}

void dlt(int a)
{
	node *t,*pre;t=pre=root;int nf=0;
	while(1)
	{
		if(t==NULL)
		{
			nf=1;break;
		}
		else if(a<t->data)
		{
			pre=t;
			t=t->l;
		}
		else if(a>t->data)
		{
			pre=t;
			t=t->r;
		}
		else if(a==t->data)
		{
			break;
		}
		
	}
	if(t==root&&nf==0)
	{
		if(t->l!=NULL){t->l->r=t->r;root=t->l;}
		else if(t->r!=NULL)
		{
			pre=t->r;
			while(pre->l!=NULL)
			{
				pre=pre->l;
			}
			pre->l=t->l;
			root=t->r;
		}
		else {cout<<"Empty!!";root=NULL;exit(1);}
		delete t;
		goto end;
	}
	
	if(nf==1)
	{
		cout<<"Not Found!!";
	}
	else if(!nf)
	{
		if(t->l==NULL&&t->r==NULL)
		{
			if(pre->l!=NULL&&pre->l->data==a)pre->l=NULL;
			else pre->r=NULL;
			delete t;
		}
		else if(t->l!=NULL&&t->r==NULL)
		{
			if(pre->r!=NULL&&pre->r->data==a)
			{
				pre->r=t->l; delete t;
			}
			else if(pre->l->data==a)
			{
				pre->l=t->l;delete t;
			}
		}
		else if(t->l==NULL&&t->r!=NULL)
		{
			if(pre->r!=NULL&&pre->r->data==a)
			{
				pre->r=t->r; delete t;
			}
			else if(pre->l->data==a)
			{
				pre->l=t->r;delete t;
			}
		}
		else if(t->l!=NULL&&t->r!=NULL)
		{
			
			temp=t->l;
			while(temp->r!=NULL)
			{
				temp=temp->r;
			}
			
			temp->r=t->r;       //cout<<"We are here...pre->data="<<temp->data;
			if(pre->l!=NULL&&pre->l->data==a)pre->l=t->l;
			else {pre->r=t->l;}
			delete t;
		}
	}
	end:;
}
