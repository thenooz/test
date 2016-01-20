#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
	int data;
	node *next;
}*arr[8];

void bfs(int v, int a);
node *gn(int a);
int delq();
void addq(int v);
bool isempty();

int vis[8]={0,0,0,0,0,0,0,0},front,rear,q[8];
int main()
{
	node *t1,*t2,*t3,*t4;
	t1=gn(2);
	arr[0]=t1;
	t1->next=t2=gn(3);t2->next=NULL;cout<<endl;
	
	t1=gn(1);
	arr[1]=t1;t1->next=t2=gn(4);
	t2->next=t3=gn(5);t3->next=NULL;cout<<endl;
	
	t1=gn(1);
	arr[2]=t1;t1->next=t2=gn(6);
	t2->next=t3=gn(7);t3->next=NULL;cout<<endl;
	
	t1=gn(2);
	arr[3]=t1;t1->next=t2=gn(8);
	t2->next=NULL;cout<<endl;
	
	t1=gn(2);
	arr[4]=t1;t1->next=t2=gn(8);
	t2->next=NULL;cout<<endl;
	
	t1=gn(3);
	arr[5]=t1;t1->next=t2=gn(8);
	t2->next=NULL;
	
	t1=gn(3);
	arr[6]=t1;t1->next=t2=gn(8);
	t2->next=NULL;cout<<endl;
	
	t1=gn(4);
	arr[7]=t1;t1->next=t2=gn(5);
	t2->next=t3=gn(6);
	t3->next=t4=gn(7);
	t4->next=NULL;cout<<endl;
	
	bfs(1,8);
		
	
	return 0;
}
void bfs(int v, int a)
{
	node *u;
	
	vis[v-1]=1;
	cout<<" "<<v;
	
	while(isempty()==false)
	{
		v=delq();
		u=*(arr+v-1);
		
		while(u!=NULL)
		{
			if(vis[u->data-1]==0)
			{
				addq(u->data);
				vis[u->data]=1;
				cout<<u->data;
			}
			u=u->next;
		}
	}
}
void addq(int v)
{
	if(rear==7)
	{
		cout<<"Overflow";exit(1);
	}
	
	rear++;
	q[rear]=v;
	
	if(front==-1)
	front=0;
}
int delq()
{
	int data;
	if(front==-1)
	{
		cout<<"Underflow";exit(1);
	}
	data=q[front];
	if(front==rear)front=rear=-1;
	else
	front++;
	return data;
}
bool isempty()
{
	if(front==-1)return true;
	return false;
}
node *gn(int a)
{
	node *n;n=new node;
	n->data=a;cout<<" "<<a;
	return n;
}
