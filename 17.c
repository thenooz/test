#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
	int data; struct node *link;
};
void add(struct node **, int);
void display(struct node *);
int main()
{
	struct node *first, *second, *third;
	add(&first,10);
	add(&first,20);
	add(&first,30);
	add(&first,25);
/*	add(&second,15);
	add(&second,25);
	add(&second,35);
	add(&third,17);
	add(&third,27);
	add(&third,37);
	//merge(&first,&second,&third);*/
	display(first);
	getch();
	return 0;
}
void add(struct node **a, int b)
{
	struct node *temp,*r;r=*a;
	temp=malloc(sizeof(struct node));
	temp->data=b;
	temp->link=NULL;
	if(*a==NULL)
	{
		*a=temp;//(*a)->link=NULL;
	}
	else
	{
		
		temp=malloc(sizeof(struct node));
		temp->data=b;temp->link=NULL;
		while(r->link!=NULL)r=r->link;
		r->link=temp;
		//while((b>=r->data)&&(b>=r->link->data)&&(r->link!=NULL))r=r->link;
		//temp->link=r->link;r->link=temp;
	}
}
void display(struct node *r)
{
	//struct node *q; q=r;
	while(r!=NULL)
	{
		printf("%d ",r->data);
		r=r->link;
	}
}
