#include<iostream>

using namespace std;
											//1. Print the tree in level order
struct node {								//2. Count leaf nodes in a binary tree
	int data;								//3. Check if the tree is height balanced
	node *l;								//4. Tree traversal using stack
	node *r;								//5. Tree traversal without stacks and without recursion
};
struct st{
	node *data; st *link;
};
st *sta;
void push(int);
st* pop();
void ttus(node *);

node * ins(int d);
void ino(node *);

node *q[10];node *front,*rear;int count,l;
void enq(node *);
node *deq();
void lev(node *);

int height(node *);
bool ifbal(node *);

void ttrwa(node *);


int main()
{
	node *head,*t;count=l=0;front=rear=NULL;
	head=ins(1);
	head->l=ins(2);
	head->l->r=ins(3);
	head->l->l=ins(4);
	head->l->l->l=ins(9);
	head->r=ins(5);
	head->r->l=ins(6);
	//lev(head);				//1
	//ino(head);				//2
	//cout<<"Number of leaf nodes is: "<<count;
	
	//cout<<height(head->r);    //3
	//cout<<endl<<ifbal(head);
	//ttrwa(head);
	
	//ttus(head);
	
	
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
	if(h->l==NULL&&h->r==NULL)count++;
	ino(h->l);
	cout<<h->data<<" ";//count++;
	ino(h->r);
}
void enq(node *t)
{
	if(t==NULL)return;
	q[count]=t;
	if(front==NULL){front=q[count];l=count;}
	rear=q[count];
	count++;
}
node *deq()
{
	node *t=front;
	l++;
	front=q[l];
	return t;
}
void lev(node *t)
{
	enq(t);node *temp=t;
	while(front!=NULL)
	{
		temp=deq();
		cout<<temp->data<<" ";
		enq(temp->l);
		enq(temp->r);
	}
	//cout<<rear->data;
}
int height(node *s)
{
	if(s==NULL)return 0;
	int lh=height(s->l);
	int rh=height(s->r);
	return max(lh,rh)+1;
}
bool ifbal(node *s)
{
	if(s==NULL) return true;
	int lh=height(s->l);
	int rh=height(s->r);
	if(lh>rh+1 || rh>lh+1)return false;
	
	bool l=ifbal(s->l);
	bool r=ifbal(s->r);
	
	return l&&r;
}
void push(node *a)
{
	if(sta==NULL)
	{
		sta=new st;
		sta->data=a;
		sta->link=NULL;
		return;
	}
	st* temp=new st; temp->data=a;
	temp->link=sta;
	sta=temp;
}
st* pop()
{
	st* temp=sta;
	sta=sta->link;
	return temp;
}
void ttus(node *t)
{
	push(t);st* temp;
	while(sta)
	{
		temp=pop();
		cout<<temp->data->data<<"->";
		if(temp->data->l!=NULL)push(temp->data->l);
		if(temp->data->r!=NULL)push(temp->data->r);
	}
}
void ttrwa(node *t)
{
	if(t==NULL)return;
	
	node *temp=t,*pr;
	while(temp!=NULL)
	{
		if(temp->l==NULL)
		{
			cout<<temp->data<<"->";
			tem=temp->r;
		}
		else
		{
			pr=temp->l;
			while(pr->r!=NULL&&pr->r!=temp)
			pr=pr->r;
			
			if(pr->r==NULL)
			{
				pr->r=temp;
				temp=temp->l;
			}
			else
			{
				pr->r=NULL;
				cout<<temp->data<<"->";
				temp=temp->r;
			}
		}
	}
}
