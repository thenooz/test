#include<iostream>
using namespace std;
                        //1. Rotate a linked list
struct node{            //2. QiuckSort
	int data;           //3. Swap elements in pairs 
	node *link;
}*f,*n,*temp,*he,*top;

void add(node **,int);
void show(node *);
void rot(node **,int );
node *part(node *, node *, node **, node **);
node *qsort(node *,node *);
node *gettail(node *);
node *swap(node *);

int main()
{
	node *head=NULL;char ch='y';int a;top=NULL;node *end;
	while(ch=='y')
	{
		cout<<"\nEnter data:";cin>>a;add(&head,a);
		cout<<"Wanna enter more data?";cin>>ch;
	}
	show(head);//cout<<"\nEnter the number of rotations:";cin>>a;
	//rot(&head,a);
	//end=gettail(head);
	//head=qsort(head,end);
	//part(head,gettail(head),&f,&n);
	head=swap(head);
	show(head);
	return 0;
}

void add(node **h,int a)
{
	node *b=*h;
	temp=new node;temp->data=a;temp->link=NULL;
	if(*h==NULL)
	{
		*h=temp;return;
	}
	while(b->link!=NULL)b=b->link;
	b->link=temp;
}
void show(node *h)
{
	temp=h;cout<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->link;
	}
}
void rot(node **h, int k)
{
	node *t=*h,*p;
	for(int i=0;i<k;i++)
	{
		while(t->link!=NULL)
		{
			p=t;
			t=t->link;
		}
		t->link=*h;
		p->link=NULL;
		*h=t;
	}
}
node *gettail(node *t)
{
	while(t->link!=NULL)
	t=t->link;
	return t;
}
node *part(node *h, node *l, node **newh, node **newl)
{
	node *t=l,*r=h,*p=NULL,*piv=l;
	while(r!=piv)
	{
		if(r->data<=piv->data)
		{
			if(*newh==NULL)*newh=r;
			p=r;r=r->link;
		}
		else
		{
			if(p!=NULL)p->link=r->link;
			temp=r->link;
			r->link=NULL;
			t->link=r;
			t=r;r=temp;
		}
	}//show(h);
	if(*newh==NULL)*newh=piv;
	*newl=t;
	return piv;
}
node *qsort(node *h, node *e)
{
	node *a=NULL, *b=NULL, *temp;
	if(h==e||h==NULL)return h;
	
	node* piv=part(h,e,&a,&b);
	
	if(a!=piv)
	{
		temp=a;
		while(temp->link!=piv)
		temp=temp->link;temp->link=NULL;
		a=qsort(a,temp);
		
		temp=gettail(a);
		temp->link=piv;
	}
	piv->link=qsort(piv->link,b);
	
	return a;
}
node *swap(node *h)
{
	node *temp;
	if(h==NULL||h->link==NULL)return h;
	temp=h->link->link;
	h->link->link=h;
	h=h->link;
//	h->link=temp;
	h->link->link=swap(temp);
	return h;
}
