#include<iostream>
using namespace std;
                        //1.Delete alternate nodes from a linked list
struct node{            //2.Split linked list into linked lists with alternate nodes and merge sorted lists
	int data;           //3.Merge Sort
	node *link;
}*f,*n,*temp,*he,*top;

void add(node **,int);
void show(node *);

void delnodes(node *);      //1
void altersplit(node *);    //2
void merge(node *,node *);

void mergesort(node **);    //3

int main()
{
	node *head=NULL;char ch='y';int a;top=NULL;
	while(ch=='y')
	{
		cout<<"\nEnter data:";cin>>a;add(&head,a);
		cout<<"Wanna enter more data?";cin>>ch;
	}
	show(head);
	//delnodes(head);
	/*altersplit(head);
	cout<<endl<<"First list:";show(f);//show(head);      //1 and 2
	cout<<"\nSecond list:";show(n);
	merge(f,n);cout<<"\nMerged list:";
	show(top);*/
	
	
	
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
	temp=h;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->link;
	}
}
void delnodes(node *h)
{
	node *temp=h->link;
	if(h==NULL||temp==NULL)return;
	h->link=h->link->link;
	delete temp;
	delnodes(h->link);
}
void altersplit(node *h)
{
	if(h!=NULL)add(&f,h->data);
	if(h->link!=NULL)add(&n,h->link->data);
	if(h->link->link!=NULL)altersplit(h->link->link);
}
void merge(node *a,node *b)
{
	if(a!=NULL&&a->data<=b->data)
	{
		add(&top,a->data);
		merge(a->link,b);
		delete a;
	}
	else if(b!=NULL)
	{
		add(&top,b->data);
		merge(a,b->link);
		delete b;
	}
	return;
}
void mergesort(node **h)
{
	if(*h==NULL||(*h)->link==NULL)return;
	
	
}
