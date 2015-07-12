#include<stdio.h>
#include<malloc.h>
struct node{int d; struct node *next;
};
void add(struct node**,int);
void show(struct node *);
int dlt(struct node *,int);
int main()
{
	struct node *start;int i,num,id;start=NULL;
	for(i=0;i<10;i++)
	{
		scanf("%d",&num);
		add(&start,num);
	}
	//show(start);
	id=dlt(start,5);
	printf("\nAfter deletion");
	show(start);printf("\nAfter placement at id position:\n");
	rep(start,id,67);
	show(start);
	return 0;
}
void add(struct node **a, int num)
{
	struct node *temp;temp=*a;
	if((*a)==NULL)
	{
		*a=malloc(sizeof(struct node));
		(*a)->d=num;
		(*a)->next=NULL;
		//printf("%d",num);
	}
	else
	{
		while(temp->next!=NULL)
		temp=temp->next;
		temp->next=malloc(sizeof(struct node));
		temp->next->d=num;
		temp->next->next=NULL;
		//printf("%d",(*a)->d);
	}
}
int dlt(struct node *start, int num)
{
	struct node *temp;temp=start;int a;a=0;
	while(temp->next->d!=num)
	{
		temp=temp->next;a++;
	}
	temp->next=temp->next->next;
	return a;
}
rep(struct node *start,int id,int num)
{
	int a=0,i;struct node *temp,*r;temp=start;
	for(i=0;i<id;i++)
	{
		temp=temp->next;
	}
	r=malloc(sizeof(struct node));
	r->d=num;
	r->next=temp->next;
	temp->next=r;
}
void show(struct node *start)
{
	//printf("start:%d",start->d);
	struct node *temp;temp=start;
	while(temp!=NULL)
	{
		printf("\n%d",temp->d);
		temp=temp->next;
	}
}
