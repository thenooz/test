#include<iostream>

using namespace std;
										//1. Count number of elements in the tree
struct node{							//2. Compare two trees
	int data;							
	node *r;node *l;
};
node * ins(int d);
void ino(node *);
int count;
int main()
{
	node *head,*t;count=0;
	head=ins(1);
	head->l=ins(2);
	head->l->r=ins(3);
	head->l->l=ins(4);
	head->r=ins(5);
	head->r->l=ins(6);
	
	t=ins(1);
	t->l=ins(2);
	t->l->r=ins(3);
	t->l->l=ins(4);
	t->r=ins(5);
	t->r->l=ins(7);
	
	ino(head);cout<<"Number of elements int he tree are:"<<count;
	return 0;
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
void ino(node *h)
{
	if(h==NULL)return;
	ino(h->l);
	count++;
	ino(h->r);
}
int comp(node *h, node *r)
{
	
}
