#include<iostream>

using namespace std;				//1. Construct a double tree
									//2. Print all the nodes present at a distance k from the root
struct node{						//3. Print ancestors of a given node
	int data;						//4. Check if a tree is a sumtree
	node *l;
	node *r;
};
node *cad(node *,bool);
void ino(node *);
node *ins(int );
void disk(node *h,int);
void ans(node *t, int);
int flag;
int sumtree(node *h);

int main()
{
	node *head,*t;flag=1;//sum=0;//count=0;
	head=ins(26);
	head->l=ins(10);
	head->l->r=ins(4);
	head->l->l=ins(6);
	head->r=ins(3);
	head->r->r=ins(3);
	//head=cad(head,0);
	//ino(head);
	//disk(head, 2);
	//ans(head,4);
	sumtree(head);
	if(flag==1)cout<<"Sum tree detected!";
	
	return 0;
}
void ino(node *h)
{
	if(h==NULL)return;
	ino(h->l);
	cout<<h->data<<" ";//count++;
	ino(h->r);
}
node *ins(int d)
{
	node *temp;
	temp=new node; 
	temp->data=d; 
	temp->r=NULL; 
	temp->l=NULL;

	return temp;
}
node *cad(node *t,bool k)
{
	if(t==NULL)return NULL;
	node *temp;
	t->l=cad(t->l,false);
	t->r=cad(t->r,true);
	if(k==false)
	{
		temp=new node;
		temp->data=t->data;
		temp->r=NULL;
		temp->l=t->l;
		t->l=temp;
		return t;
	}
	else
	{
		temp=new node;
		temp->data=t->data;
		temp->l=NULL;
		temp->r=t->r;
		t->r=temp;
		return t;
	}
}
void disk(node *h,int k)
{
	if(h==NULL)return;
	disk(h->l,k-1);
	disk(h->r,k-1);
	if(k==0)cout<<h->data<<" ";
}
void ans(node *h, int tar)
{
	if(h==NULL)return;
	if(flag==0)ans(h->l,tar);
	if(flag==0)ans(h->r,tar);
	if(h->data==tar)
	{
		cout<<h->data<<" ";
		flag=1;
		return;
	}
	if(flag==1)cout<<h->data<<" ";
}
int sumtree(node *h)
{
	int sum=0;
	if(h==NULL)return 0;
	if(h->l==NULL&&h->r==NULL)return h->data;
	sum=sumtree(h->l)+sumtree(h->r);
	if(sum==h->data)return sum+h->data;
	else flag=0;
	return sum;
}
