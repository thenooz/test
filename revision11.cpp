#include<iostream>
using namespace std;
struct node{
	int data;
	node * next;
}*arr[8];
int vis[8];

node *gn(int a);
void dfs(int v,int n);
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
	
	dfs(1,8);
	
	
	
	return 0;
}

node *gn(int a)
{
	node *n;n=new node;
	n->data=a;cout<<" "<<a;
	return n;
}

void dfs(int v, int n)
{
	node *q;
	vis[v-1]=1;
	
	cout<<"->"<<v;
	q=arr[v-1];				//vth head node
	while(q!=NULL)
	{
		if(vis[(q->data)-1]==0)
		dfs(q->data,n);
		else q=q->next;
	}
}
