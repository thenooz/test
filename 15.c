#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{ int data;struct node *link;
};
void addq(struct node **,struct node **,int);
int delq(struct node **,struct node **);
void q_display(struct node *);
int main()
{
	struct node *front,*rear;int item;
	front=rear=NULL;
	addq(&front,&rear,11);
	addq(&front,&rear,12);
	addq(&front,&rear,13);
	addq(&front,&rear,14);
	addq(&front,&rear,15);
	q_display(front);
	item=delq(&front,&rear);
	printf("\nItem extracted from the queue: %d",item);
	q_display(front);
	getch();
	}
void addq(struct node **f,struct node **r,int item)
{
	struct node *temp;
	temp=malloc(sizeof(struct node));
	temp->data=item;temp->link=NULL;
	if(*f==NULL)*f=temp;
	else (*r)->link=temp;
	*r=temp;
}
int delq(struct node **f,struct node **r)
{
	int e;struct node *temp;
	temp=*f;
	e=temp->data;
	(*f)=(*f)->link;
	free(temp);
	return e;
}
void q_display(struct node *f)
{
	printf("\n");
	while(f!=NULL)
	{
		printf(" %d ",f->data);
		f=f->link;
	}
}
