#include<iostream>

using namespace std;
struct node{
	int data;
	node *next;
};
node *gn(int);
void addq(int);
int popq();


void dfs(int, node **);
void bfs(int, node **);
node *arr[8],*front,*rear;
bool vis[8];
int main()
{
	node *v1,*v2,*v3,*v4;front=rear=NULL;
	v1=arr[0]=gn(2);
	v2=v1->next=gn(3);
	
	v1=arr[1]=gn(1);
	v2=v1->next=gn(4);
	v3=v2->next=gn(5);
	
	v1=arr[2]=gn(1);
	v2=v1->next=gn(6);
	v3=v2->next=gn(7);
	
	v1=arr[3]=gn(2);
	v2=v1->next=gn(8);
	
	v1=arr[4]=gn(1);
	v2=v1->next=gn(8);
	
	v1=arr[5]=gn(3);
	v2=v1->next=gn(8);
	
	v1=arr[6]=gn(3);
	v2=v1->next=gn(8);
	
	v1=arr[7]=gn(4);
	v2=v1->next=gn(5);
	v3=v2->next=gn(6);
	v4=v3->next=gn(7);
	
	bfs(1,arr);
	
	return 0;
}
node *gn(int a)
{
	node *t=new node;
	t->data=a;
	t->next=NULL;
	return t;
}
void dfs(int d,node **a)
{
	vis[d-1]=1;
	cout<<d<<" ";
	node *q=*(a+d-1);
	while(q!=NULL)
	{
		if(vis[q->data-1]==0)
		dfs(q->data,a);
		else 
		q=q->next;
	}
}
void bfs(int d, node **a)
{
	addq(d);
	cout<<d<<" ";
	vis[d-1]=1;
	//node *q=*(a+d-1);
	while(front!=NULL)
	{
		d=popq();
		node *q=a[d-1];
		while(q!=NULL)
		{
			if(vis[q->data-1]==0)
			{
				addq(q->data);
				vis[q->data-1]=1;
				cout<<q->data<<" ";
			}
			q=q->next;
		}
	}
}
void addq(int a)
{
	node *t=new node;
	t->data=a;
	t->next=NULL;
	if(front==NULL)
	front=rear=t;
	else
	{
		rear->next=t;
		rear=rear->next;
	}
}
int popq()
{
	int a=front->data;
	node *temp=front;
	front=front->next;
	delete temp;
	return a;
}
