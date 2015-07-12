#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{ int data; struct node *link;
};
void push(struct node **,int);
void pop(struct node*);
void display(struct node *);
void main()
{
	char ask;
	ask='y';int x;
	struct node *start;
	do{
		printf("\nEnter data:");
		scanf("%d",&x);
		push(&start,x);
		printf("\nWant to enter more nodes? ");
		scanf("%c",ask);
	}while(ask=='y'||ask=='Y');
display(start);
pop(start);
pop(start);
display(start);	
}
void push(struct node **a,int b)
{
	struct node *c;c=*a;
	if(*a==NULL)
	{
		(*a)->data=b;
		(*a)->link=NULL;
	}
	else
	{
		while(c->link!=NULL)
		c=c->link;
		c->link=malloc(sizeof(struct node));
		c->link->data=b;
		c->link->link=NULL;
	}
}
void pop(struct node *a)
{
	if(a==NULL)
	{
		printf("NO DATA");
		exit(1);
	}
	else{
		while(a->link!=NULL)
		a=a->link;
		printf("Popped out data:%d",a->data);
		free(a);
	}
}
void display(struct node *a)
{
	while(a->link!=NULL)
	{
		printf("  %d  ",a->data);
		a=a->link;
	}
	printf("That's all!");
}
